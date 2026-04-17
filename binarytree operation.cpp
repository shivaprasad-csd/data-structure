// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;
class treenode{
    public:
    int data;
    treenode*left;
    treenode*right;
    treenode(int val){
        data=val;
        left=right=nullptr;
    }
};
class binarytree{
    private:
    treenode* root;
    public:
    binarytree(){
        root=nullptr;
    }
    treenode* insertrecursive(treenode* node,int val){
        if(node==nullptr){
            return new treenode(val);
        }
        char choice;
        cout<<"insert "<<val<<" to left or right of "<<node->data<<"?(1/r):"<<endl;
        cin>>choice;
        if(choice=='l'||choice=='L'){
            node->left=insertrecursive(node->left,val);
        }
        else{
            node->right=insertrecursive(node->right,val);
        }
        return node;
    }
    void insert(int val){
        if(root==nullptr){
            root=new treenode(val);
            cout<<val<<" insert as root\n";
        }
        else{
            root=insertrecursive(root,val);
        }
    }
    void inorder(){
        cout<<"inorder traversal\n";
        inorderrecursive(root);
        cout<<endl;
    }
    void inorderrecursive(treenode* node){
        if(node==nullptr){
            return;
        }
        inorderrecursive(node->left);
        cout<<node->data<<" ";
        inorderrecursive(node->right);
    }
    void preorder(){
        cout<<"preorder traversal\n";
        preorderrecursive(root);
        cout<<endl;
    }
    void preorderrecursive(treenode* node){
        if(node==nullptr){
            return;
        }
        cout<<node->data<<" ";
        preorderrecursive(node->left);
       preorderrecursive(node->right);
    }
    void postorder(){
        cout<<"postorder traversal\n";
        postorderrecursive(root);
        cout<<endl;
    }
    void postorderrecursive(treenode* node){
        if(node==nullptr)
        return;
        postorderrecursive(node->left);
         postorderrecursive(node->right);
         cout<<node->data<<" ";
    }
    
};

int main() {
  binarytree th;
  int ch,item;
  cout<<"1.insertnode\n 2.inorder traversal\n 3.preorder traversal\n 4.postorder traversal\n";
  do{
      cout<<"enter choice:";
      cin>>ch;
      switch(ch){
          case 1:
          cout<<"enter val to insert\n";
          cin>>item;
          th.insert(item);
          break;
          case 2:
          th.inorder();
          break;
          case 3:
          th.preorder();
          break;
          case 4:
          th.postorder();
          break;
          case 5:
          cout<<"exiting.."<<endl;
          default:
          cout<<"invalid choice!"<<endl;
      }
  }while(ch!=5);

    return 0;
}
output
1.insertnode
 2.inorder traversal
 3.preorder traversal
 4.postorder traversal
enter choice:1
enter val to insert
10
10 insert as root
enter choice:1
enter val to insert
5
insert 5 to left or right of 10?(1/r):
l
enter choice:1
enter val to insert
20
insert 20 to left or right of 10?(1/r):
r
enter choice:2
inorder traversal
5 10 20 
enter choice:3
preorder traversal
10 5 20 
enter choice:4
postorder traversal
5 20 10 
enter choice:5
exiting..
invalid choice!


=== Code Execution Successful ===
