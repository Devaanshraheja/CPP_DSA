#include <iostream>
#include<q
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
        return root;

    }
    node * lca(node* root, int a, int b){
        if(!root) return null;
        if(root->data==a|| root->data==b ) return root;
        node* leftmaimila=lca(node* root->left, a,b);

        node* rightmainmila=lca(node* root->right, a,b);
       if(leftmaimila && rightmainmila) return root;// aagr dono mein ek ek element mil gya then root will be lca
       else if(leftmaimila) return leftmaimila;// agar domno left mein honge to we'll get left node ka dress

       else return rightmainmila;// nhi to right side mein hoga

    }
    int main(){
        node * root=build_tree();
        node * ans= lca(root,3,13);
        if(ans)cout<<ans->data<<endl;
        else cout<<"no lca possible"
        return 0;
         
    }