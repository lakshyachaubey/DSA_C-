#include<iostream>
#include<stack>
using namespace std;

void print(stack <int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main() {
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);

    stack<int> temp;


    // empty st into gt;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    st.push(5);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }

    cout<<endl;
    print(st);

    return 0;
}