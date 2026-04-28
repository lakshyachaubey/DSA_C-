// double pointer is used to store address of a pointer.
#include<iostream>
using namespace std;
int main() {
    int x = 5;
    int *ptr = &x;
    int **p = &ptr;
    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<p<<endl;

    cout<<&x<<endl;
    cout<<*ptr<<endl; // This means print the value stored at the address pointed by or stored in ptr, which is x.
    cout<<**p<<endl; // This means print the value stored at the address pointed by or stored in p, which is ptr, and then print the value stored at the address pointed by or stored in ptr, which is x. So this is equivalent to x.

    return 0;
}