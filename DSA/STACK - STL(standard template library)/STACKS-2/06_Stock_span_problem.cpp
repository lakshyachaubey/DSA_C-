#include<iostream>
#include <stack>
using namespace std;
int main() {
    int stock[8] = {100,80,60,81,70,60,75,85};
    // first day se pehle koi value usse chhoti ya badi nhi hogi to first value ka span 1 hoga (wo apne din ke liye highest tha)
    int span[8];
    span[0] = 1;

    // BRUTEFORCE ARRAY
    for(int i = 1; i<8; i++){
        int count = 1; // if count = 0
        for(int j = i-1; j>=0; j--){  // then j = i ; kyuki wo value khud bhi ab tk ki greatest value h
            if(stock[i]>=stock[j]) count++;
            else break;  // jaha pe badi value mili to break mtlb ab isse pehle koi or value greatest thi
        }
        span[i] = count;
    }
    for(int i = 0; i<8; i++){
        cout<<span[i]<<" ";
    }
    cout<<endl;


    // OPTIMISED WAY;
    cout<<"OPTIMISED WAY"<<endl;
    cout<<endl<<"previous greater element method"<<endl;


    stack <int> st;
    int pgi[8];
    st.push(0);
    pgi[0] = -1;
    for(int i = 1; i<8; i++){
        while(st.size()>0 && stock[i]>=stock[st.top()]) st.pop();

        if(st.size()==0) pgi[i] = -1;
        else pgi[i] = st.top();
        st.push(i);
    }
    cout<<"previous greater index array: ";
    for(int i = 0; i<8; i++){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;

    cout<<"span array: ";
    for(int i = 0; i<8; i++){
        cout<<i-pgi[i]<<" ";
    }
    cout<<endl;
    return 0;
}