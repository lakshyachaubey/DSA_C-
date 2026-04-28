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

int main(){
    Node* a = new Node(10);   // yaha pe technically ek naya node bna(anonymous jiska koi naam nhi h) uske data section me 10 store krdo aur uske next section me NULL store krdo aur uske address ko node pointer a me store krdo
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    // to ab hm nodes ka naam nhi derhe blki nodes bna ke unko node pointers me store krrhe hain.  fir first node pointer ko temp me store krke uske through pure linked list ko traverse kr skte hain loop se
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
    return 0;
}