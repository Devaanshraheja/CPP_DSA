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
node * search(node* root, int key){
    if(!root) return NULL;
    if(root->data==key) return key;
    else if(root->data<key){
        return search(root->right,key);

    }
    else{
        return search(root->left,key);
    }

}