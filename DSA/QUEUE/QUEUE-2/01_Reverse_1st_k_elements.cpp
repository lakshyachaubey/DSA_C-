#include<bits/stdc++.h>
using namespace std;

void display(queue <int> &q){
    int n = q.size();
    for(int i = 1; i<=n; i++){
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);
    }
}
int main() {
    queue<int> q;
    stack<int> s;
    int n;
    int k;
    cout<<"Enter the number of elements in the queue : ";
    cin>>n;
    cout<<"Enter the elements in the queue : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    display(q);

    cout<<"\nEnter the value of k : ";
    cin>>k;

    for(int i = 1; i<=k; i++){   // pushing first k elements of queue into stack
                                // pop pop 3 4 5
        int x = q.front();
        s.push(x);
        q.pop();
    }

    while(!s.empty()){  // pushing elements from stack back to queue, so that they are in reverse order
        q.push(s.top());  // 3 4 5 2 1
        s.pop();
    }
    
    for(int i = 1; i<=n-k; i++){  // pushing remaining n-k elements of queue to back of queue, so that they are in same order as before
        int x = q.front();    // 2 1 3 4 5
        q.pop();
        q.push(x);
    }

    display(q);
    return 0;
} 