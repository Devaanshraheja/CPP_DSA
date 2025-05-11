#include<iostream>
using namespace std;

// Define the node of BST
class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d; 
        left = right = NULL;
    } 
};

// Insert node in BST
node* insert_at_bst(node* root, int data) {
    if (!root) return new node(data);

    if (data < root->data)
        root->left = insert_at_bst(root->left, data);
    else
        root->right = insert_at_bst(root->right, data);

    return root;
}

// Build BST from user input
node* buildbst() {
    node* root = NULL;
    int data;
    cin >> data;

    while (data != -1) {
        root = insert_at_bst(root, data);
        cin >> data;
    }

    return root;
}

// Print nodes within a given range
void print_range(node* root, int k1, int k2) {
    if (!root) return;

    if (root->data > k1)
        print_range(root->left, k1, k2);

    if (root->data >= k1 && root->data <= k2)
        cout << root->data << " ";

    if (root->data < k2)
        print_range(root->right, k1, k2);
}

// Helper class to store head and tail of list
class LinkedList {
public:
    node* head;
    node* tail;

    LinkedList(node* h = NULL, node* t = NULL) {
        head = h;
        tail = t;
    }
};

// Convert BST to Linked List (in-order)
LinkedList bst_to_ll(node* root) {
    if (!root) return LinkedList(NULL, NULL);

    // Only left subtree
    if (root->left && !root->right) {
        LinkedList leftList = bst_to_ll(root->left);
        leftList.tail->right = root;
        root->left = NULL;
        return LinkedList(leftList.head, root);
    }

    // Only right subtree
    else if (!root->left && root->right) {
        LinkedList rightList = bst_to_ll(root->right);
        root->right = rightList.head;
        return LinkedList(root, rightList.tail);
    }

    // Both subtrees
    else if (root->left && root->right) {
        LinkedList leftList = bst_to_ll(root->left);
        LinkedList rightList = bst_to_ll(root->right);

        leftList.tail->right = root;
        root->right = rightList.head;
        root->left = NULL;

        return LinkedList(leftList.head, rightList.tail);
    }

    // Leaf node
    else {
        return LinkedList(root, root);
    }
}

// Print linked list
void print_ll(node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->right;
    }
    cout << "NULL" << endl;
}


int main() {
    
    node* root = buildbst();

    cout << "BST to Linked List (In-Order):\n";
    LinkedList result = bst_to_ll(root);
    print_ll(result.head);

    return 0;
}
