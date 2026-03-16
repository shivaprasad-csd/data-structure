// Online C++ compiler to run C++ program online
#include <iostream>
#include<list>
using namespace std;

int main() {
    list<int>n;
    n.push_back(10);
    n.push_back(20);     
    n.push_back(30);
    n.push_back(40);
    n.push_front(50);
    cout<<"list elements are:"<<endl;
    list<int>::iterator it;
    for(it=n.begin();it!=n.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    n.pop_front();
    n.pop_back();
    cout<<"after deleting the list elements:"<<endl;
    for(it=n.begin();it!=n.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
//list elements are:
50 10 20 30 40 
after deleting the list elements:
10 20 30 


=== Code Execution Successful ===
