#include<iostream>
using namespace std;
int main() {
    int *ptr1 = NULL; // NULL is a reserved address which means that the pointer is not pointing to any valid memory location. It is used to indicate that the pointer is not initialized or is not pointing to any valid memory location..
    int *ptr2 = 0;
    int *ptr3 = '\0';
    cout<<ptr1<<endl<<ptr2<<endl<<ptr3;
    return 0;
}