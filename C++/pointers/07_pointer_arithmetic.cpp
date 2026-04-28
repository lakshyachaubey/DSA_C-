#include<iostream>
using namespace std;
int main() {
    int x = 5;
    int *p = &x;
    cout<<p<<endl; // This will print the address of x, which is stored in p.
    cout<<p+1<<endl; // This will print the address of the next integer after x, which is p + 1. Since p is a pointer to an integer, adding 1 to it will move 4 the pointer to the next integer in memory.
    // correct way =  (*ptr)++
    return 0;
}
