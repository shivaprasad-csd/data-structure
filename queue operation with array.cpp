// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
# define size 6
class queue{
    private:
    int qu[size];
    int front,rear;
    public:
    queue(){
        front=rear=-1;
    }
    //enque operation
    void enqueue(int val){
        if(rear==size-1){
            cout<<"queue is full\n";
         return;
        }
     if(front==-1 && rear==-1){
            front=rear=0;
        }
        else{
            rear++;
        }
        qu[rear]=val;
    }
    //dequeue operation
    int dequeue(){
        if(front==-1 || front>rear){
        cout<<" deletion is not posible\n";
        return -1;
        }
        int val=qu[front];
        front++;
        if(front>rear){
            front=rear=-1;
        }
        return val;
    }
    int peek(){
        if(front==-1 || front>rear){
            cout<<"queue is empty - underflow\n";
            return -1;
        }
        return qu[front];
    }
    void display(){
        if(front==-1 || front>rear){
            cout<<"queue is empty- underflow\n";
            return ;
        }
        for(int i=front;i<=rear;i++){
            cout<<qu[i]<<" ";
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
output
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
10 20 
1.enqueue operation
2.dequeue operation
3.peek operation
4.display operation
5.exit
enter your choice

=== Session Ended. Please Run the code again ===
