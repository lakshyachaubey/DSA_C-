#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int f;
    int b;
    int s;
    vector<int> arr;

    // parameterized constructor
    Queue(int size){
        f = 0;
        b = 0;
        s = 0;
        vector<int> v(size);
        arr = v;
    }

    // NOTE - now we can not do b-f becuase in circular queue back wapis se ghoom ke front ke aage aajayega to size galat aane lgegi
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is full\n";
        }
        arr[b++] = val;
        s++;
    }

    void pop(){
        if(s==0){  // f and b are at same position only possible when queue is empty
            cout<<"Queue is empty\n";
        }
        else{
            f++;
            s--;
        }
    }

    int front(){ 
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return arr[f];
        }
    }

    int back(){
        if(s == 0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return arr[b-1];  // because after every push b is incremented
        }
    }

    int size(){
        return s;
    }

    bool empty(){
        if(s==0) return true;
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