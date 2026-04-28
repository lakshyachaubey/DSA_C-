#include<iostream>
#include <vector>
using namespace std;

class Stack{        // User defined data structure 
public:
    vector <int> v;  // no need of idx in vector , vector kabhi full nhi hota 
    
    void push(int val){
        v.push_back(val);
    }

    int top(){
        if(v.size()==0){
            cout<<"Stack is Empty / Underflow"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }

    void pop(){
        if(v.size()==0){
            cout<<"Stack is Empty / Underflow"<<endl;
            return;
        }
        v.pop_back();
    }

    int size(){
        return v.size();
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
    cout<<st.size()<<endl;
    cout<<st.top();
    return 0;
}