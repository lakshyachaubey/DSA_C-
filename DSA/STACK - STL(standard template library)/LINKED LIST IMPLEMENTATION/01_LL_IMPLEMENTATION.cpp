#include<iostream>
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

class Stack{
    public:
        Node* head;
        int size;

        Stack(){
            head = NULL;
            size = 0;
        }

        void push(int val){        // Add node at head to push at top of the stack
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
            size++;
        }
        void pop(){
            if(head == NULL){
                cout<<"Stack is empty"<<endl;
                return;
            } // stack is empty
            Node* temp = head;
            head = head->next;
            delete temp;   // same as free(temp);
            size--;
        }

        int top(){
            if(head == NULL){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return head->data;
        }

        void display(){
            Node* temp = head;
            while(temp != NULL ){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};
int main() {
    Stack st;
    st.top();
    st.pop();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size<<endl;
    st.display();
    return 0;
}