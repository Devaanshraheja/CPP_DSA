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
        return root;

    }
    node * solve(node* root,){
        if(!root) return null;
        if(root->data==a|| root->data==b ) return root;
        node* leftmaimila=lca(node* root->left, a,b);

        node* rightmainmila=lca(node* root->right, a,b);
       if(leftmaimila && rightmainmila) return root;// aagr dono mein ek ek element mil gya then root will be lca
       else if(leftmaimila) return leftmaimila;// agar domno left mein honge to we'll get left node ka dress

       else return rightmainmila;// nhi to right side mein hoga

    }
    int distanceofnode(node* root,int node, int k){
        if(!root)return;
        if(root->data==node){
            solve(root ,k);
            return 0;


        }
        int d= distanceofnode(root->left, node,k);
        if(d!=-1){
            if(d+1==k){
                cout<<root->data<<" ";
                return -1;



            }
            int rd=k-d-2;
            solve(root->right,rd);
            return d+1;

        }
        // for ight rst
        int d= distanceofnode(root->right, node,k);
        if(d!=-1){
            if(d+1==k){
                cout<<root->data<<" ";
                return -1;



            }
            int rd=k-d-2;
            solve(root->right,rd);
            return d+1;

        }
        return -1;
    }
    int main(){
        node * root=build_tree();
        distanceofnode(root,10,2);



        
        return 0;
         
    }
