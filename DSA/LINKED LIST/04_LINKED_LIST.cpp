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
    Node a(10);    // means a is an object of Node class and in its data section it will store 10 and in its next section it will store NULL pointer
    Node b(20);
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    

    // printing the value of value of b using a

    // FIRST REVISE
    // if     *ptr = &a;
    //  then  ptr->data  == (*p).data == a.data      will give the data of a  
    
    Node *ptr = &a;   // Made a new pointer pointing the first node a
    cout<<ptr->data<<" "<<(*ptr).data<<" "<<a.data<<endl; // will print the data of a
    // ptr me store address ki value pe jao or uske data wale section ko print kro  // means a ke data ko print kro

    cout<<(*(a.next)).data<<endl; // will print the data of b    // because a.next  is a pointer pointing to b and *a.next will give the value of b(access of b) and then we can access the data of b by .data
    // means a ke next me store address ki value pe jao or uske data wale section ko print kro  // means b ke data ko print kro
    
    cout<<a.next->data<<endl; // will print the data of b    // this is the short hand of the above line a.next->data is same as (*(a.next)).data


    // printing value of c using a
    cout<<((*(a.next)).next->data)<<endl; // will print the data of c
    cout<<a.next->next->data<<endl; // will print the data of c

    cout<<((*(a.next)).next->next->data)<<endl;
    // OR
    cout<<ptr->next->next->next->data<<endl;

    return 0;
}

// -> KA MATLAB     ----- 1. pehle pointer me stored address pe jao   2. uske baad arrow ke baad likhe hue data section ko access kro
// DRY RUN
/*  
    a.next  == b ka address == &b
    *(a.next)  == value at address stored in a.next == (*(&b))  == b
    (*(a.next)).data  == b.data  == 20

    (*(a.next)).next == b.next == &c
    (*(a.next)).next->data == c.data == 30

    (*(a.next)).next->next == c.next == &d
    (*(a.next)).next->next->data == d.data == 40


    cout<<ptr->next->next->next->data<<endl;
    ptr->next == a.next == &b
    ptr->next->next == b.next == &c
    ptr->next->next->next == c.next == &d
    ptr->next->next->next->data == d.data == 40
*/