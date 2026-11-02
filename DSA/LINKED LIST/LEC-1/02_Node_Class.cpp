#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main() {
    // 10 20 30 40
    Node a;
    a.data = 10;

    Node b;
    b.data = 20;

    Node c;
    c.data = 30;

    Node d;
    d.data = 40;
    // isse kya hua ki hmne alag alag nodes bnadiye but unka koi connection nhi hai

    // Forming LL
    a.next = &b; // a ke next me b ka address store krdo
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    cout<<a.data<<" "<<b.data<<" "<<c.data<<" "<<d.data<<endl;
    cout<<&a<<endl; // will print the address of node a
    cout<<a.next<<" "<<b.next<<" "<<c.next<<" "<<d.next<<endl;   // will print the address stored in the next pointers

    return 0;
}