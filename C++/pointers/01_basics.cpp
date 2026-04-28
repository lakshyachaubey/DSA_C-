#include<iostream>
using namespace std;
int main() {
    int x = 10;
    int *p = &x;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Address of x: "<<&x<<endl;
    cout<<"Value pointed by p: "<<*p<<endl;
    cout<<"Address pointed by p: "<<p<<endl;
    return 0;
}


// *p means the value at the address stored in p, which is x. So *p is equivalent to x.
// &x means the address of x, which is stored in p. So &x is equivalent to p.