// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
# define SIZE 7
class hashtable{
  int table[SIZE];
  public:
  hashtable(){
      for(int i=0;i<SIZE;i++)
      table[i]=-1;
  }
  int hashfunction(int key){
      return key%SIZE;
  }
  //insertion using linear probing
  void insert(int key){
      int index=hashfunction(key);
      //if slot empty
      if(table[index]==-1){
          table[index]=key;
      }
      else {
          //collision linear probing
          int i=1;
          while(i<SIZE){
              int newindex=(index+i)%SIZE;
              if(table[newindex]==-1){
                  table[newindex]=key;
                  return;}
                  i++;
          }
          cout<<"hash table is full\n";
      }
  }
  //search element
  void search(int key){
      int index=hashfunction(key);
      int i=0;
      while(i<SIZE){
          int newindex=(index+i)%SIZE;
          if(table[newindex]==key){
              int temp=table[newindex];
              table[newindex]=-1;
              cout<<"deleted element"<<temp<<"deleted at index"<<newindex<<endl;
              return;
          }
          if(table[newindex]==-1) break; i++;
      }
      cout<<" no such element in hashtable to delete it\n";
  }
  //dispaly hash table
  void display(){
      cout<<"\nhash table: \n";
      for(int i=0;i<SIZE;i++){
          cout<<i<<"-->";
          if(table[i]==-1)
          cout<<"empty";
          else
          cout<<table[i];
          cout<<endl;
      }
  }
};
int main() {
    hashtable h;
    int n,key;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter element:\n";
    for(int i=0;i<n;i++){
        cin>>key;
        h.insert(key);
    }
    h.display();
    //search key
    cout<<"\n enter element to search:";
    cin>>key;
    h.search(key);
    h.display();
    return 0;
}
output
enter number of elements:7
enter element:
50
700
76
85
92
73
101

hash table: 
0-->700
1-->50
2-->85
3-->92
4-->73
5-->101
6-->76

 enter element to search:85
deleted element85deleted at index2

hash table: 
0-->700
1-->50
2-->empty
3-->92
4-->73
5-->101
6-->76


=== Code Execution Successful ===
