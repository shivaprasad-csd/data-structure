// Online C++ compiler to run C++ program online
#include <iostream>
//#include<set>
//#include<list>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int>v={40,10,20,30,50};
    sort(v.begin(),v.end());
    cout<<"SORTING THE ELEMENTS IN SORTED ORDER:"<<endl;
    for(auto x : v){
        cout<<x<<" ";
    }
    
    return 0;
}
//output
SORTING THE ELEMENTS IN SORTED ORDER:
10 20 30 40 50 

=== Code Execution Successful ===
