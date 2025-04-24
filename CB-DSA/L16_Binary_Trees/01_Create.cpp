#include <iostream>
#include<stack>
using namespace std;
class node {
public:
    int data;
    node* right;
    node* left;
    node(int d){
        data=d;
        right=left=NULL;

    }
};
node* build_tree(){
    int data;
    cin>>data;
    if(data==-1) return NULL  ;// base case
    node * root=new node(data);
    root->left = build_tree();// ba hum recursion ko bolenge ki left sub tree bnade
    root->right = build_tree();// right sub tree recursion bnade
}
void preorder(node* root){
    if(!root) return;
    cout<<root->data<<" " ;
    preorder(root->left);
    preorder(root->right);
}
int main(){
     node * root= build_tree();
     preorder(root);
     cout<<endl;
    return 0;
}