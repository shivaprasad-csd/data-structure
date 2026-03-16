// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
//insertion at beginning
void insertionatbeginning(Node*&head,int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
//insert at ending
void insertatending(Node*&head,int value){
    Node *newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return;
    }
    Node *temp=head;
    while((temp->next)!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
//insertion at specific location
void insertatsploc(Node*&head,int value,int pos){
    Node *newNode=new Node();
    newNode->data=value;
    if(pos==1){
        newNode->next=head;
        head=newNode;
        return;
    }
    Node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
int main()
{
    Node*head=new Node();
    head->data=19;
    head->next=NULL;
    insertionatbeginning(head,22);
    insertatending(head,18);
    insertatsploc(head,45,2);
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}
//output
22
45
19
18

