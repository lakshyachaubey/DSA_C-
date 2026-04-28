// 02 


#include<iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp =  *a;
    *a = *b;  // value at address stored in a is assigned the value at address stored in b
    *b = temp;
    return;
}
int main() {
    int x = 6;
    int y = 7;
    cout<<"Before swapping: x = "<<x<<" y = "<<y<<endl;
    swap(&x, &y);
    // or
    // int *p1 = &x;
    // int *p2 = &y;
    // swap(p1, p2);
    
    cout<<"After swapping: x = "<<x<<" y = "<<y<<endl;
    return 0;
}