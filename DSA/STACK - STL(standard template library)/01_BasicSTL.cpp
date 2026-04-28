#include<iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);    // 1
    st.push(20);    // 2
    st.push(30);    // 3
    st.push(40);    // 4
    st.push(50);    // 5
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;


    // How to print elements of stack;
    // will print in reverse order because printing starts from top to bottom and every new inserted element inserted one over other.
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    } 
    // But now stack gets EMPTY 

    // to solve this store the elements of stack after printing in an another data structure;  or temp stack

    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        // temp.push(st.top());   or
        int x = st.top();
        temp.push(x);
        st.pop();
    }

    //  putting elements back from temp to st
    while(temp.size()>0){
        int x = temp.top();
        st.push(x);
        temp.pop();
    }

    cout<<endl<<st.top();   
    return 0;
}