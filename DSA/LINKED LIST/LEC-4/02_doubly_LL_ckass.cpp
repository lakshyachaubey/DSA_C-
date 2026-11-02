#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    int size;

    DoublyLinkedList(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(size == 0) head = tail = newNode;
        else{ 
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
        return;
    }

    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(size == 0) head = tail = newNode;
        else{ 
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
        return;
    }

    void insertAtIndex(int index, int val){
        if(index < 0 || index > size) return;
        else if(index == 0) insertAtHead(val);
        else if(index == size) insertAtTail(val);
        else{
            Node* newNode = new Node(val);
            Node* temp = head;
            for(int i=0; i<index-1; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
            temp->next->prev = newNode;
            size++;
        }
    }

    void deleteAtHead(){
        if(size == 0) return;
        else if (size == 1){
            delete head;
            head = tail = NULL;
            size--;
        }
        else{
            Node* temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
            size--;
        }
    }

    void deleteAtTail(){
        if(size == 0) return;
        else if (size == 1){
            delete tail;
            head = tail = NULL;
            size--;
        }
        else{
            Node* temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
            size--;

        }
    }

    void deletAtIndex(int index){
        if(index<0 || index>size) return;
        else if(index == 0) deleteAtHead();
        else if(index == size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 1; i<index; i++){
                temp = temp->next;
            }
            Node* delNode = temp->next;
            temp->next = delNode->next;
            temp->next->prev = temp;
            delete delNode;
            size--; 
        }
    }

    int getAtIndex(int index){
        if(index<0 || index>=size) return -1;
        if(index == 0) return head->val;
        else if(index == size-1) return tail->val;
        else if(index < size/2){  // head se traverse 
            Node* temp = head;
            for(int i=0; i<index; i++){
                temp = temp->next;
            }
            return temp->val;
        }
        else{       // tail se traverse
            Node* temp = tail;
            for(int i=1; i<size-index; i++){
                temp = temp->prev;
            }
            return temp->val;
        }
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};



int main() {
    DoublyLinkedList dll;
    dll.insertAtTail(10);
    dll.insertAtTail(20);
    dll.insertAtTail(30);
    dll.insertAtTail(40);
    dll.display();
    dll.insertAtTail(50);
    dll.display();
    dll.insertAtHead(5);
    dll.display();
    dll.insertAtIndex(3, 15);
    dll.display();
    dll.deletAtIndex(3);
    dll.display();
    dll.insertAtTail(60);
    dll.insertAtTail(90);
    dll.insertAtTail(70);
    dll.display();
    cout << dll.getAtIndex(7) << endl;


    return 0;
}