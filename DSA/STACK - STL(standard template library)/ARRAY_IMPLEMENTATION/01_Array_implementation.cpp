#include<iostream>
using namespace std;

class Stack{        // User defined data structure 
public:
    int arr[5];
    int idx = -1;    // to check whether stack is empty or not; if idx = -1 then stack is empty; if idx = 0 then stack has one element and so on; if idx = 4 then stack is full because array size is 5 and index starts from 0.
    
    void push(int val){
        if(idx == (sizeof(arr)/sizeof(arr[0]))-1){
            cout<<"Stack is Full / Overflow"<<endl;
            return;
        }
        arr[++idx] = val;
    }

    int top(){
        if(idx == -1){
            cout<<"Stack is Empty / Underflow"<<endl;
            return -1;
        }
        return arr[idx];
    }

    void pop(){
        if(idx == -1){
            cout<<"Stack is Empty / Underflow"<<endl;
            return;
        }
        idx--;
    }

    int size(){
        return idx+1;
    }

    void display(){ 
        for(int i = 0; i<=idx; i++){
            cout<<arr[i]<<" ";
        } 
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
    cout<<st.size()<<endl;
    st.display();
    return 0;
}