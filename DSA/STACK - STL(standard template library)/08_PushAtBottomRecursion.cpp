#include<iostream>
#include<stack>
using namespace std;

void display_rec(stack <int> &st){
    if(st.size() == 0) return;
    int x = st.top();
    st.pop();
    display_rec(st);
    cout<<x<<" ";
    st.push(x);
}

void pushatbottom(stack <int> &st, int x){     // stack is pass by reference)
    if(st.size()==0){
        st.push(x);
        return;
    }
    int y = st.top();
    st.pop();
    pushatbottom(st,x);
    st.push(y);
}


int main() {
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    display_rec(st);
    pushatbottom(st,5);
    cout<<endl;
    display_rec(st);
    return 0;
}