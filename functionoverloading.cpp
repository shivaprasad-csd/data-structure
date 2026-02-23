
#include <iostream>
using namespace std;
class Add{
    int x,y;
    float a,b;
public:
void  add(int x,int y){
    cout<<"addtion:"<<x+y<<endl;
}
void add(float a,float b){
    cout<<"addtion:"<<a+b;
}

};

int main() {
    Add a1;
    a1.add(2,3);
    a1.add(2.5f,2.5f);
   
    return 0;
}
output
addtion:5
addtion:5

=== Code Execution Successful ===
