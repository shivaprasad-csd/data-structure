#include <iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
    void input(){
        cout<<"enter id\n";
        cin>>id;
        cout<<"enter name\n";
        cin>>name;
    }
    void display(){
        cout<<"id="<<id<<endl;
        cout<<"name="<<name;
        cout<<endl;
    }
};
int main() {
    int n;
    cout<<"enter number of student \n";
    cin>>n;
    student* details=new student[n];
    for(int i=0;i<n;i++){
        cout<<"enter details of student"<<i+1<<endl;
        details[i].input();
    }
    for(int i=0;i<n;i++){
         cout<<"student details"<<i+1<<endl;
        details[i].display();
    }
    delete[] details;
  return 0;
}
//out put
enter number of student 
2
enter details of student1
enter id
2
enter name
shiva 
enter details of student2
enter id
3
enter name
prasad
student details1
id=2
name=shiva
student details2
id=3
name=prasad


=== Code Execution Successful ===
