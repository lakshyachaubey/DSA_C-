#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int>st;

    int arr[8] = {3,1,2,5,4,6,2,3};
    int pge[8];
    int n = 8;
    pge[0] = -1;
    st.push(arr[0]);
    // traversing from starting side
    for(int i = 1; i<n; i++){
        // pop all the smaller elements
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        
        if(st.size()==0) pge[i] = -1;
        else pge[i] = st.top();
        st.push(arr[i]);
    }
    for(int i = 0; i<n; i++){
        cout<<pge[i]<<" ";
    }

    return 0;
}