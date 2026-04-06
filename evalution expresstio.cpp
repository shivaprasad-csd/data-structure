// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<cctype>
# define Max 100
using namespace std;
class postfixevalution{
    private:
    int st[Max];
    int top;
    public:
   postfixevalution(){
        top=-1;
    }
    void push(int val){
        if(top==Max-1)
        cout<<"stack is Overflow\n";
        else 
        st[++top]=val;
    }
    int pop(){
        if(top==-1){
            //cout<<"stack is underflow\n";
            return -1;
        }
        else 
        return st[top--];
    }
    int priority(char op){
        if(op=='+' || op=='-')
        return 0;
        else
        return 1;
    }
    int evalpost(char expn[]){
        int i=0;
        int x,y,res;
        while(expn[i]!='\0'){
            if(isdigit(expn[i]))
            push(expn[i]-'0');
            else
            {
                y=pop();
                x=pop();
                switch(expn[i]){
                    case '+':res=x+y;break;
                    case '-':res=x-y;break;
                    case '*':res=x*y;break;
                    case '/':res=x/y;break;
                    case '%':res=x%y;break;
                }
                push(res);
            }
            i++;
        }
        return pop();
    }
};



int main() {
   postfixevalution obj;
   char expn[100];
   cout<<"enter the postfix expresstion:\n";
   cin.getline(expn,100);
   int result=obj.evalpost(expn);
   cout<<"the result of postfix expression is "<<result;
    return 0;
}
output
enter the postfix expresstion:
9-((3*4)+5)/4
the result of postfix expression is 4

=== Code Execution Successful ===
