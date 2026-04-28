#include<iostream>
using namespace std;
int main() {
    int x = 122;
    int *p = &x;
    cout<<*p<<endl; // This means print the value stored at the address pointed by or stored in p. 
    *p = 6;
    cout<<*p<<endl;

    int m,n;
    int *p1 = &m;
    int *p2 = &n;
    cout<<"Enter first number: ";
    cin>>*p1; // This means take input and store it at the address pointed by p1, which is x.
    cout<<"Enter second number: ";
    cin>>*p2; // This means take input and store it at the address pointed by p2, which is y.

    cout<<"Value of m: "<<*p1<<endl;
    cout<<"Value of n: "<<*p2<<endl;

    cout<<*p1 + *p2<<endl; // This means add the values stored at the addresses pointed by p1 and p2, which is m and n respectively. So this is equivalent to m + n.
    return 0;
}