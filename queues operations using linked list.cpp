// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 class node{
     public:
     int data;
     node* next;
     node(int val){
         data=val;
         next=NULL;
     }
 };
 class queue{
     private:
     node* front;
     node* rear;
     public:
     queue(){
         front=rear=NULL;
 }
 void enqueue(int val){
     node* newnode=new node(val);
     if(front==NULL){
         front=rear=newnode;
         return;
     }
     rear->next=newnode;
     rear=newnode;
 }
 int dequeue(){
     if(front==NULL){
         cout<<"queue is empty\n";
         return -1;
     }
     node* temp=front;
     int x=front->data;
     front=front->next;
     delete temp;
     if(front==NULL){
         rear=NULL;
     }
     return x;
 }
 int peek(){
     if(front==NULL){
         cout<<"queue is emoty\n";
         return -1;
     }
     return front->data;
 }
 void display(){
     if(front==NULL){
         cout<<"queue is empty\n";
         return ;
     }
     node* temp=front;
     while(temp!=NULL){
         cout<<temp->data;
         if(temp->next!=NULL){
             cout<<"->";
         }
         temp=temp->next;
     }
     cout<<endl;
 }

};
int main() {
   queue q;
   int ch,val;
   do{
   cout<<"1.enqueue operation\n";
   cout<<"2.dequeue operation\n";
   cout<<"3.peek operation\n";
   cout<<"4.display operation\n";
   cout<<"5.exit\n";
   cout<<"enter your choice\n";
   cin>>ch;
   switch(ch){
       case 1:
       cout<<"enter the element\n";
       cin>>val;
       q.enqueue(val);
       break;
       case 2:
       val=q.dequeue();
       if(val!=-1){
       cout<<"deleted element is"<<val;
       }
       break;
       case 3:
       val=q.peek();
       if(val!=-1){
           cout<<"top most element is"<<val;
       }
           break;
       case 4:
       q.display();
       break;
       default:
       return -1;
   }
   }while(ch!=5);
   
    return 0;
}
// out put
1.enqueue operation
2.dequeue operation
3.peek operation
4.display operation
5.exit
enter your choice
1
enter the element
10
1.enqueue operation
2.dequeue operation
3.peek operation
4.display operation
5.exit
enter your choice
1
enter the element
20
1.enqueue operation
2.dequeue operation
3.peek operation
4.display operation
5.exit
enter your choice
4
10->20
1.enqueue operation
2.dequeue operation
3.peek operation
4.display operation
5.exit
enter your choice
