#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    public:
    Node* f;
    Node* b;
    int size;

    Queue(){
        f = NULL;
        b = NULL;
        size = 0;
    }

    void push(int val){
        Node* n = new Node(val);
        if(f==NULL){
            f = n;
            b = n;
        }
        else{
            b->next = n;
            b = n;
        }
        size++;
    }

    void pop(){
        if(f==NULL){
            cout<<"Queue is empty\n";
        }
        else{
            Node* temp = f;
            f = f->next;
            delete(temp);
            size--;
        }
    }

    int front(){
        if(f==NULL){
            cout<<"Queue is empty\n";
            return -1;
        }
        else{
            return f->data;
        }
    }

    int back(){
        if(f==NULL){
            cout<<"Queue is empty\n";
            return -1;
        }
        else{
            return b->data;
        }
    }

    int getsize(){
        return size;
    }

    bool empty(){
        if(f==NULL) return true;
        else return false;
    }

    void display(){
        Node* temp = f;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40); 
    q.push(50);

    cout<<"Size of queue: "<<q.getsize()<<endl;
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Back element: "<<q.back()<<endl;

    q.pop();
    cout<<"Size of queue after pop: "<<q.getsize()<<endl;
    cout<<"Front element after pop: "<<q.front()<<endl;

    q.display();
    return 0;
}
