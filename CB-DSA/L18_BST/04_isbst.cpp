#include<iostream>
#include<queue>
#inlcude<climits>
using namespace std;
class node{
    public:
        int data;
        node* right;
        node* left;

    node(int d){
        data=d;
        left=right=NULL;
    }    

};

node * insertatbst(node* root, int data){
    if(! root){
        root=new node(data);
        return root;
    }
    else if(data< root->data){
        root->left= insertatbst(root->left,data);
        
    }
    else{
        root->right= insertatbst(root->right,data);
        
    }
    return root;

}
node* buildbst(){
    node* root =NULL;// intially the root node would be poitning towards null 

    int data;
    cin>>data;
    while(data!=-1){//jab tak data null nhi hohata tab tak loop will work 
        insertatbst(root,data);
        cin>>data;
    }
    return root;

}
int maxxTree(node* root){
    if(!root) return INT_MIN;
    int left=maxxTree(root->left);
    int right=maxxTree(root->right);
    return max(root->data, max(left,right));
}

bool is_bst(node* root){
    if(!root) return true;
    int leftMax=maxxTree(root->left);
    int rightMax=maxxTree(root->right);


     if( root->data >=leftMax and root->data<=rightMax && is_bst(root->left)and is_bst(root->right) )return true;
     else return false;
}