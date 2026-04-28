#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40); 
    dq.push_back(50);

    dq.pop_front();

    dq.push_front(5);
    dq.pop_back();
    return 0;
}


// display stl in deque