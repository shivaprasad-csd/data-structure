// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
template<class T>
void swap_values(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}

int main() {
    int x=10,y=20;
    float p=2.3f,q=4.3f;
    char c1='A',c2='B';
    cout<<"Before swaping:"<<endl;
    cout<<x<<" "<<y<<endl;
    cout<<p<<" "<<q<<endl;
    cout<<c1<<" "<<c2<<endl;
    swap_values(x,y);
    cout<<"after swaping the elements\n";
    cout<<x<<" "<<y<<endl;
    swap_values(p,q);
    cout<<p<<" "<<q<<endl;
    swap_values(c1,c2);
    cout<<c1<<" "<<c2<<endl;
  

    return 0;
}
//output
Before swaping:
10 20
2.3 4.3
A B
after swaping the elements
20 10
4.3 2.3
B A
