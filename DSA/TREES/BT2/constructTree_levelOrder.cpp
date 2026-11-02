#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* construct(int arr[], int n){
    Node* root = new Node(arr[0]);

    queue<Node*> q;
    q.push(root);

    int i = 1;
    int j = 2;

    while(q.size()>0 && i<n){ 
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;

        if(arr[i] != -1) l = new Node(arr[i]);
        else l = NULL;
        if(j!=n && arr[j] != -1) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;

    }
    return root;
}

void levelOrderQueue(Node* root){  // BFS --> V.V.V. IMP
    queue<Node*> q;
    q.push(root);
    while(q.size()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    cout<<endl;
}

int main(){
    // construct
    int arr[] = {1 ,2 ,3 ,4, 5, -1,  6, -1, -1, 7, 8, 9, -1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    Node* root = construct(arr, n);
    levelOrderQueue(root);
    return 0;
}  