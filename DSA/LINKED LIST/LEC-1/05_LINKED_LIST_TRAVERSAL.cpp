#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    // Constructor

    Node(int d){
        data = d;
        next = NULL;
    }
};
int main() {
    // 10 20 30 40
    Node a(10);    // means a is an object of Node class and in its data section it will store 10 and in its next section it will store NULL
    Node b(20);
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    
    Node temp = a; // temp me a ke data ko copy kr diya

    while(temp.next != NULL){
        cout<<temp.data<<" ";
        temp = (*(temp.next));
    }
    // 10 20 30        40 will not print bcz tem.next will be NULL

    int x = 1;
    while(x){
        cout<<temp.data<<" ";
        if(temp.next == NULL) break;
        temp = (*(temp.next));
    }  // 10 20 30 40 will print bcz we are checking the condition after printing the data of temp

    return 0;
}

/*
    temp = a;
    temp = (*(temp.next)) 
    temp.next == a.next == &b;
    temp = (*(temp.next)) == (*(&b)) == b;
    now temp.data == b.data == 20
*/