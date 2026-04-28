#include<iostream>
using namespace std;
int main() {
    int x, y;
    int*p1=&x, p2 = y;  // p2 is a int variable not pointer 
    // correct
    int *p3 = &x, *p4 = &y;
    return 0;
}