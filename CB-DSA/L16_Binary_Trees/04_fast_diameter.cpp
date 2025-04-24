class Pair{
    public:
        int height;
         int diameter;
};
Pair fast_diameter(node* root){
    if (!root){
        Pair p;
        p.height=p.diameter=0;
        return p;
    }
    Pair p;
    Pair left= fast_diameter(root->left);
    Pair right=fast_diameter(root->right);
    
}
}