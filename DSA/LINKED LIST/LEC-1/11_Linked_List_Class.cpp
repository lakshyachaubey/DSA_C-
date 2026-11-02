#include<iostream>
using namespace std;
class Node{  // this is user defined data type, because we are creating a class of Node which will have 2 data members, one is val and other is next which is pointer to the next node  // jaise khud ka ek data type like int, float, bna rhe h .
    public:
    int val;
    Node* next;
    // Constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{   // this is user defined data structure  // jaise khud ka array bna rhe h jisme hme head, tail or size ki info di hui hoti h.
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void display(){
        Node* temp = head;
        if(size == 0) cout<<"List is empty"<<endl;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertatPos(int idx, int val){
        if(idx < 0 || idx > size){
            cout<<"Invalid position"<<endl;
            return;
        }  // invalid position
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtEnd(val);
        else{
            Node* temp = new Node(val);
            Node* curr = head;
            for(int i=1; i<=idx-1; i++){
                curr = curr->next;
            }
            temp->next = curr->next;  // important 
            curr->next = temp;
            size++;
        }
    }

    int getAtPos(int idx){
        if(idx < 0 || idx >= size){
            cout<<"Invalid position"<<endl;
            return -1;
        }
        else if(size == 0) return head->val;
        else if(idx == size-1) return tail->val;
        else{ 
            Node* curr = head;
            for(int i=1; i<=idx-1; i++){
                curr = curr->next;
            }
            return curr->val;
        }
    }

    void deleteAtHead(){
        if(size == 0){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    void deleteAtEnd(){
        if(size == 0){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* curr = head;
        while(curr->next != tail){
            curr = curr->next;
        }
        
        curr->next = NULL;
        tail = curr;
        size--;
    }

    void deleteAtPos(int idx){
        if(idx < 0 || idx >= size){
            cout<<"Invalid position"<<endl;
            return;
        }
        else if(idx == 0) deleteAtHead();
        else if(idx == size-1) deleteAtEnd();
        else{
            Node* curr = head;
            for(int i=1; i<=idx-1; i++){
                curr = curr->next;
            }
            Node* temp = curr->next; // element to be deleted
            curr->next = curr->next->next; // or temp->next;
            delete temp;
            size--;
        }
    }
};
int main() {
    // LinkedList* ll = new LinkedList(); // { } // is line se ky hoga ki ek LinekedList type ka object create hoga jiska address ll me store hoga. 
    // dynamic allocation, ye hm array vector ya kisi or data structure me bhi krskte h 
    // like int* arr = new int[10];

    LinkedList ll; // this will create a linked list with head and tail as NULL and size as 0 
    ll.insertAtEnd(10); // {10 -> NULL}
    ll.display();
    ll.insertAtEnd(20); // {    10 -> 20 -> NULL}
    ll.display();
    ll.insertAtEnd(30); // {    10 -> 20 -> 30 -> NULL}
    ll.insertAtEnd(40); // {    10 -> 20 -> 30 -> 40 -> NULL}
    ll.display();
    ll.insertatPos(2,25); // {    10 -> 20 -> 25 -> 30 -> 40 -> NULL}
    ll.display();
    cout<<ll.getAtPos(2)<<endl; // 20
    ll.deleteAtHead(); // {    20 -> 25 -> 30 -> 40 -> NULL}
    ll.display();
    ll.deleteAtEnd(); // {    20 -> 25 -> 30 -> NULL}
    ll.display();
    
    
    return 0;
}