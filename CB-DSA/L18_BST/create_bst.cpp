#include<iostream>
#include<queue>
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
node* is_bst(node* root){
    if(!root) return 0;
    else if( root->data < data )
}
void levelOrder(node* root) {
	queue<node*> q;

	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		q.pop();

		if (f) {
			cout << f->data << " ";
			if (f->left) q.push(f->left);
			if (f->right) q.push(f->right);
		}
		else {
			cout << endl;
			if (!q.empty()) q.push(NULL);
		}
	}
}

void preorder(node* root){
    if(!root) return;
    cout<<root->data<<" " ;
    preorder(root->left);
    preorder(root->right);
}
int main(){
    if(!root) return;
    node* root= buildbst();



}