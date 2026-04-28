#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int f;
    int b;
    vector<int> arr;

    // parameterized constructor
    Queue(int size){
        f = 0;  
        b = 0;
        vector<int> v(size);
        arr = v;
    }

    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is full\n";
        }
        else{
            arr[b++] = val;
        }
    }

    void pop(){
        if(b-f==0){  // f and b are at same position only possible when queue is empty
            cout<<"Queue is empty\n";
        }
        else{
            f++;
        }
    }

    int front(){ 
        if(b-f==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return arr[f];
        }
    }

    int back(){
        if(b-f == 0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return arr[b-1];  // because after every push b is incremented
        }
    }

    int size(){
        return b-f;
    }

    bool empty(){
        if(b-f==0) return true;
        else return false;
    }

    void display(){
        for(int i = f; i<b; i++){
            cout<<arr[i]<<" ";  
        }
        cout<<endl;
    }
};

int main() {

        Queue q(5);
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40); 
        q.push(50);
        q.display();

        q.pop();
        q.display();
    return 0;
}