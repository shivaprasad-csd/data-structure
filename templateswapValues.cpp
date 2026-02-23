
#include <iostream>
using namespace std;
template<typename T>
class Swap
{
    T a,b,temp;
    public:
 Swap(T x,T y)
    {
        a=x;
        b=y;
    }
void display()
{ 
  cout<<"before swaping a:,b:"<<a<<b<<endl;
  temp=a;
  a=b;
  b=a;
  cout<<"After swaping a,b:"<<a<<b<<endl;
}
};
int main(){
    Swap<int>S(5,6)
    S.display();
}

output
before swaping a,b:5 6
After swaping a,b:6 5


=== Code Execution Successful ===
