#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class Deque{
    public:
    Node* f;
    Node* b;
    int size;
    Deque(){
        f = NULL;
        b = NULL;
        size = 0;
    }

    void push_back(int val){
        Node* n = new Node(val);
        if(b==NULL){  // if queue is empty
            f = n;
            b = n;
            size++;
        }
        else{
            b->next = n;
            n->prev = b;
            b = n;
            size++;
        }
    }

    void pop_front(){
        if(f==NULL){
            cout<<"Queue is empty\n";
        }
        else{
            Node* temp = f;
            f = f->next;
            f->prev = NULL;
            delete(temp);
            size--;
        }
    }

    void push_front(int val){
        Node* n = new Node(val);
        if(f == NULL){  // if queue is empty
            f = n;
            b = n;
            size++;
        }
        else{
            n->next = f;
            f->prev = n;
            f = n;
            size++;
        }
    }

    void pop_back(){
        if(b==NULL){
            cout<<"Queue is empty\n";
        }
        else{
            Node* temp = b;
            b = b->prev;
            b->next = NULL;
            delete(temp);
            size--;
        }
    }

    void display(){
        Node* temp = f;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void displayReverse(){
        Node* temp = b;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->prev;
        }
        cout<<endl;
    }

        
};
int main() {
    
    Deque dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40); 
    dq.push_back(50);
    dq.display();

    dq.pop_front();
    dq.display();

    dq.push_front(5);
    dq.display();
    dq.pop_back();
    dq.display();
    dq.displayReverse();

    return 0;
}


// Also Deque can be used using STL in C++ by including <deque> header file. It has all the functions like push_back, push_front, pop_back, pop_front, display etc.
