#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    // Constructor
    Node(int d, Node* n){
        data = d;
        next = n;
    }

    // Node(int d){
    //     data = d;
    //     next = NULL;
    // }
};
int main() {
    // 10 20 30 40
    Node a(10, NULL);
    Node b(20, NULL);
    Node c(30, NULL);
    Node d(40, NULL);

    // Node a(10);
    // Node b(20);
    // Node c(30);
    // Node d(40);  // this will do thw same thing every node next will be pointing to NULL

    cout<<a.data<<" "<<b.data<<" "<<c.data<<" "<<d.data<<endl;
    cout<<&a<<endl; // will print the address of node a
    cout<<a.next<<" "<<b.next<<" "<<c.next<<" "<<d.next<<endl;   // will print the address of the next node

    return 0;
}