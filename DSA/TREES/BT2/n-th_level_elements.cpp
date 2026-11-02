#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value) {
            data = value;
            left = NULL;
            right = NULL;
        }
};

int levels(Node* root) {
    if(root == NULL) return 0;
    // int leftlevel = levels(root->left);
    // int rightlevel =  levels(root->right);
    // return 1 + max(leftlevel , rightlevel);
    return 1 + max(levels(root->left), levels(root->right));
}

void nth_level(Node* root, int k, int level){
    if(root == NULL) return;
    if(k==level) cout<<root->data<<" ";
    nth_level(root->left, k+1, level);
    nth_level(root->right, k+1, level);
}

void nth_level2(Node* root, int k, int level){ // more optimised 
    if(root == NULL) return;
    if(k==level){
        cout<<root->data<<" ";
        return;
    }
        
    nth_level2(root->left, k+1, level);
    nth_level2(root->right, k+1, level);
}

void levelorder(Node* root){
    int n = levels(root);
    for(int i = 1; i<=n; i++){
        nth_level2(root, 1, i);
    }
}
int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    int level = 2;
    nth_level(a, 1, level);
    cout<<endl;
    levelorder(a);

    return 0;
}