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
    Node* temp = head;    // we can skip making temp pointer and directly use head pointer but we are making temp pointer just to make the code look cleaner and more readable, directly using head pointer will also work because head pointer has a address and hm address hi input lerhe h and address ko hi update krre h, hm data ko to sirf print krra rhe h data ko change to kr hi nhi rhe and address ka to pass by vaue ho rha h.
    if(temp==NULL) return;
    cout<<temp->data<<" ";
    temp = temp->next;   // ab head/ temp next pe chala gya to next ka data print hoga.
    display_rec(temp);
}


// iterative display function better hota h because isme hr call stack pe ek local parameter variable bnata h aur usme data store krta h aur fir usko update krta h,to recursive me jyada memory use hoti h as compared to iterative approach, isliye iterative approach better hota h.

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