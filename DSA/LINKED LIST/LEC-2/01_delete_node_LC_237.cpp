#include<iostream>
using namespace std;
class Node{  
    public:
    int val;
    Node* next;
    // Constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    Node* temp = head;
    if(head == NULL) cout<<"List is empty"<<endl;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* deletenode(Node* head, Node* target){
    Node* temp = head;
    if(head == target){
        head = head->next;
        delete target;
        return head;
    }
    while(temp->next != target){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    delete target;
    return head;
}

int main() {

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    Node* head = a;
    display(head);
    head = deletenode(head, d);
    display(head);

    return 0;
}