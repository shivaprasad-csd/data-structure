// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
using namespace std;

int main() {
    map<int,string>student;
    student[101]="shiva";
    student[102]="siddu";
    student[103]="vamshi";
    student[104]="salma";
    cout<<"student record"<<endl;
    for(auto x:student)
    {
        cout<<x.first<<" name:"<<x.second<<endl;
    }
    return 0;
}
//student record
101 name:shiva
102 name:siddu
103 name:vamshi
104 name:salma


=== Code Execution Successful ===
