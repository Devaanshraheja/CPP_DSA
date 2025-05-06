#include<iostream>
#inlcude<queue>
using namespace std;
class node{
    public:
        int data;
        node* right;
        node* left;
    node(int d){
        data=d;
        right=left=NULL;

    }
};
node * insert_at_bst(node* root, int data){
    if(!root){
        root=new node(data);
        return root;
    }
    else if(data<root->data){
        root->left=insert_at_bst(root->left,data);

        

    }
    else{
        root->right==insert_at_bst(root->right,data);
        return root;
    }
}
void print_range (node* root, int k1, int k2){
    if(!root) return ;
    else if(root->data>=k2){
        print_range(root->left, k1, k2);
    }
    else if(root->data<=k1){
        print_range(root->right,k1,k2);
    }

    else (root->data>=k1 and root->data<=k2)
    {
    cout<<root->data<<" " ;
    }    
    print_range(root->right, k1,k2);
}
