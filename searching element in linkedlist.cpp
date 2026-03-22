// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insertatend(Node*&head,int val){
    Node* newnode=new Node();
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void display(Node*&head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    } cout<<endl;
}
 int searchelement(Node*&head,int key){
     int pos=1;
     Node* temp=head;
     while(temp!=NULL){
         if(temp->data==key){
             return pos; // element found
         }
         temp=temp->next;
         pos++;
     }
     return -1; //not found 
 }

int main() {
    Node* head=NULL;
    int n,val,key;
    cout<<"enter no.of elements"<<endl;
    cin>>n;
    cout<<"enter the values"<<endl;
    for(int i=0;i<n;i++){
        cin>>val;
        insertatend(head,val);
    }
    cout<<"original list"<<endl;
    display(head);
    cout<<"enter the key element"<<endl;
    cin>>key;
    int position=searchelement(head,key);
    if(position == -1)
    cout<<"element is not found"<<endl;
    else
    cout<<"element is found at="<<position<<endl;
   

    return 0;
}
//output
enter no.of elements
5
enter the values
10
20
30
40
50
original list
10->20->30->40->50->
enter the key element
30
element is found at=3
