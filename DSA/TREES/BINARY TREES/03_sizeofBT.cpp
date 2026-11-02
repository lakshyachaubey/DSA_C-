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

void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int size(Node* root) {
    if(root == NULL) return 0;
    int leftSize = size(root->left);
    int rightSize = size(root->right);
    return 1 + leftSize + rightSize;
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

    displayTree(a);
    cout << "\nSize: " << size(a) << endl;

    return 0;
}