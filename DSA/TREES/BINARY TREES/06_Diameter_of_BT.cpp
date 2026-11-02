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

int levels(Node* root) {
    if(root == NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void helper(Node* root, int &maxdia){
    if(root == NULL) return;
    int dia = levels(root->left) + levels(root->right);  // diameter = left levels + right levels 
    maxdia = max(maxdia, dia);  // max dia ko update krte rho wrt to every node's diameter
    helper(root->left, maxdia);  // left subtree me bhi check krna hoga
    helper(root->right, maxdia);  // right subtree me bhi check krna hoga
}
int diameter(Node* root){
    int maxdia = 0;   // hme max nikalne ke liye kisi se to compare krna padega isliye ek variable to rakhna pdega
    helper(root, maxdia);
    return maxdia;
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
    cout << "\nLevels: " << levels(a) << endl;
    cout << "Diameter: " << diameter(a) << endl;
    return 0;
}