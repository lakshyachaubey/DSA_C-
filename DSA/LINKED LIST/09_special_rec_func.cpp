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

void display_rec(Node* head){
    if(head==NULL) return;  
    display_rec(head->next);
    cout<<head->data<<" "; 
}  



int main(){
    Node* a = new Node(10); 
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    Node* temp = a;
    // ek temp pointer bnaya traversal ke liye, 
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;  // updating temp;
    }

    cout<<endl;

    cout<<a->next->data<<endl; // will print the data of b

    display_rec(a);
    return 0;
}