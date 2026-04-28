    #include<iostream>
    #include<queue>
    #include<stack>
    using namespace std;

    void display(queue<int> &q){
        int n = q.size();
        for(int i = 1; i<=n; i++){
            int x = q.front();
            cout<<x<<" ";
            q.pop();
            q.push(x);
        }
    }

    void reversequeue(queue<int> &q){
        stack<int> s;
        // empty the queue into the stack
        while(q.size()>0){
            s.push(q.front());
            q.pop();
        }
        // empty the stack into the queue to reverse the order
        while(s.size()>0){
            q.push(s.top());
            s.pop();
        }
    }
    int main() {
        queue<int> q;

        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40); 
        q.push(50);
        display(q);
        reversequeue(q);
        cout<<"\nAfter reversing the queue: ";
        display(q);
        return 0;
    }