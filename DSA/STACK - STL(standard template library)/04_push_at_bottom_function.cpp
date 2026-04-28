#include<iostream>
#include<stack>
using namespace std;

void print(stack <int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void pushatbottom(stack <int> &st, int x){     // stack is pass by reference
    stack <int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
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



    pushatbottom(st,5);


    cout<<endl;
    print(st);

    return 0;
}