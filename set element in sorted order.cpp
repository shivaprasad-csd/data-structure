#include <iostream>
#include<set>
using namespace std;

int main() {
    set<int>s={50,40,30,20,10};
    cout<<"set elements in sorted order:"<<endl;
    for(auto x : s){
        cout<<x<<" ";
    }
    
    return 0;
}
//out put
set elements in sorted order:
10 20 30 40 50 

=== Code Execution Successful ===
