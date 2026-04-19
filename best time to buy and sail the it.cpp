#include <iostream>
using namespace std;
int main() {
    int a[5]={7,2,1,6,3};
    int bestbuy=a[0];
    int bestsail=0;
    for(int i=1;i<5;i++){
        if(a[i]>bestbuy)
        bestsail=max(bestsail,a[i]-bestbuy);
        bestbuy=min(bestbuy,a[i]);
    }
    cout<<"profit after of sail\n"<<bestsail;
    return 0;
}
output
profit after of sail
5

=== Code Execution Successful ===
