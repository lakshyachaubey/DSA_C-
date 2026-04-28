#include<iostream>
using namespace std;
int main() {
    int x = 6;
    int y = 7;
    int *p1 = &x;
    int *p2 = &y;
    cout<<*p1  + *p2<<endl;

    int m,n;
    int *pt1 = &m;
    int *pt2 = &n;
    cout<<"Enter first number: ";
    cin>>*pt1;
    cout<<"Enter second number: ";
    cin>>*pt2;
    cout<<*pt1+*pt2;
    return 0;
}