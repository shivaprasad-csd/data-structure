
#include <iostream>
using namespace std;
template<typename T>
class SwapValues
{
    T a,b,temp;
    public:
 SwapValues(T x,T y)
    {
        a=x;
        b=y;
    }
 
void display( )
{ 
  cout<<"before swaping a,b:"<<a<<" "<<b<<endl;
  temp=a;
  a=b;
  b=temp;
  cout<<"After swaping a,b:"<<a<<" "<<b<<endl;

}
};
int main(){
    SwapValues<int>s1(2,3);
    SwapValues<float>s2(25.3f,2.3f);
    SwapValues<string>s3("name","prasad");
    
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
output
before swaping a,b:2 3
After swaping a,b:3 2
before swaping a,b:25.3 2.3
After swaping a,b:2.3 25.3
before swaping a,b:name prasad
After swaping a,b:prasad name


=== Code Execution Successful ===

