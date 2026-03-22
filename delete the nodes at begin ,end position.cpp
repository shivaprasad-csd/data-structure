// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
}; 
 //insert at end
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
} //dispaly the elements before deletion
void display(Node*&head){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
    }
    cout<<endl;
}
//delete form begin
void deleteatbeginning(Node*&head){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}
// delete from end
void deleteatend(Node*&head){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
  temp->next=NULL;
}
//delete at specific position
void deleteatposition(Node*&head,int pos){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(pos==1){
        deleteatbeginning(head);
        return;
    }
    Node*temp=head;
    int i=1;
    while(i<pos-1 and temp!=NULL){
        temp=temp->next;
        i++;
    }
    if(temp==NULL || temp->next==NULL){
        cout<<"invalid position"<<endl;
        return;
    }
    Node* delnode=temp->next;
    temp->next=temp->next->next;
    delete delnode;
}

  
int main() {
    Node* head=NULL;
    insertatend(head,10);
     insertatend(head,20);
      insertatend(head,30);
       insertatend(head,40);
        insertatend(head,50);
        cout<<"original list:"<<endl;
        display(head);
        deleteatbeginning(head);
        cout<<"after deleting from beginning:"<<endl;
        display(head);
        deleteatend(head);
        cout<<"after deleting at end position:"<<endl;
        display(head);
        deleteatposition(head,2);
        cout<<"after deleting at position 2 :"<<endl;
         display(head);
    return 0;
}
//output
original list:
10->20->30->40->50->
after deleting from beginning:
20->30->40->50->
after deleting at end position:
20->30->40->
after deleting at position 2 :
20->40->

