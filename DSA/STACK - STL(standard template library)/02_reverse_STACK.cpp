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

    stack<int> gtemp;
    stack<int> rtemp;

    // empty st into gt;
    while(st.size()>0){
        gtemp.push(st.top());
        st.pop();
    }

    // empty gtemp into rtemp;

    while(gtemp.size()>0){
        rtemp.push(gtemp.top());
        gtemp.pop();
    }

    // empty rtemp int st;

    while(rtemp.size()>0){
        st.push(rtemp.top());
        rtemp.pop();
    }

    cout<<endl;
    print(st);

    return 0;
}