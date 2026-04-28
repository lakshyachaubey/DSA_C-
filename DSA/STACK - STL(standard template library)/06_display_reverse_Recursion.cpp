#include<iostream>
#include<stack>
using namespace std;

void print(stack <int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void display_rec_rev(stack <int> &st){
    if(st.size() == 0) return;
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    display_rec_rev(st);
    st.push(x);    // to put the element back in stack after printing; otherwise stack will get empty after printing and we will not be able to use it again.
}



int main() {
    stack <int> st;
    st.push(10);
    st.push(20); 
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);

    cout<<endl;
    display_rec_rev(st);
    return 0;
}