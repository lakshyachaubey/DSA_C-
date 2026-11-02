#include<iostream>
using namespace std;
int main() {
    int x;
    int *p = &x;

    printf("this is standard way of input : ");
    cin>>x;

    printf("This is pointer method to input :");
    cin>>*p;

    
    return 0;
}