// Online C++ compiler to run C++ program online
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int n;
    cout<<"enter no.of elements to multiply\n";
    cin>>n;
    double x;
    cout<<"enter the element to multiply\n";
    cin>>x;
    if(n<0){
        n=-n;
        x=1/x;
    }
    double res=1;
   while(n>0){
       if(n%2==1){ //odd number 
        res=res*x;
      //  n--;
       }
        x=x*x; //reduce the number of iterations
        n/=2;
   }
     
    cout<<fixed<<setprecision(5);
    cout<<"power of x(x^n) is\n"<<res;
    return 0;
}
 output
enter no.of elements to multiply
3
enter the element to multiply
2.10000
power of x(x^n) is
9.26100

=== Code Execution Successful ===
