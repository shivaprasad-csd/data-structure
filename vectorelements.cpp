// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>n;
    n.push_back(10);
    n.push_back(20);     
    n.push_back(30);
    n.push_back(40);
    cout<<"vector elements are:"<<endl;
    vector<int>::iterator it;
    for(it=n.begin();it!=n.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
//vector elements are:
10 20 30 40 


=== Code Execution Successful ===
