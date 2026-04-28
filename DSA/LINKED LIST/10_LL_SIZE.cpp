// using pointers we dont have to use . or * operator again and again 


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //constructor
    Node(int d){
        data = d;
        next = NULL;
    }
};

void display(Node* first){
    Node* temp = first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int size(Node* first){
    Node* temp = first;
    int count = 0;
    while(temp!=NULL){
        temp = temp->next;
        count++;      // Jb jb temp non zero ho count ko bdha do
    }
    return count;   
}
int main(){
    Node* a = new Node(10); 
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node* temp = a;
    // ek temp pointer bnaya traversal ke liye, 
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;  // updating temp;
    }

    cout<<endl;

    cout<<a->next->data<<endl; // will print the data of b

    display(a);
    cout<<endl;

    cout<<size(a);
    return 0;
}