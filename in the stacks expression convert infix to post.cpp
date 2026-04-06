// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<cctype>
# define size 100
using namespace std;
class infixtopostfix{
    private:
    char st[size];
    int top;
    public:
    infixtopostfix(){
        top=-1;
    }
    void push(char item){
        if(top==size-1)
        cout<<"stack is full\n";
        else 
        st[++top]=item;
    }
    char pop(){
        if(top==-1){
            cout<<"stack is empty\n";
            return '\0';
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
    void convert(){
        char in[30],post[30];
        int i,j=0;
        cout<<"enter infix expression: \n";
        cin.getline(in,30);
        for(i=0;in[i]!='\0'; i++){
            if(in[i]=='(')
            push(in[i]);
            else if(isalnum(in[i]))
            post[j++]=in[i];
            else if(in[i]==')'){
                while(top>-1 && st[top]!='(')
                post[j++]=pop();
                pop();
            }
            else
            {
                while(top>-1 && st[top]!='(' && priority(st[top])>=priority(in[i])){
                    post[j++]=pop();
                }
                push(in[i]);
            }
        }
        while(top>-1)
            post[j++]=pop();
            post[j]='\0';
            cout<<"postfix expression is: "<<post;
        }
};



int main() {
   infixtopostfix obj;
   obj.convert();
    return 0;
}
output
enter infix expression: 
a+b*c
postfix expression is: abc*+

=== Code Execution Successful ===
