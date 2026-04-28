#include<iostream>
using namespace std;
void find(int n, int *p1, int *p2){
    *p2 = n%10;  // last digit.   // *p2 = n%10 kaam kaise krrha h , p2 ,me ptr2 ki value store h mtlb lastdigit ka address store h, this means , (*p2) = *ptr2 = (value stored at the address stored in ptr2) = lastdigit. So this means store n%10 at the address stored in ptr2, which is lastdigit. So this means store n%10 in lastdigit.
    while(n>9){
        n = n/10;

    }
    *p1 = n;
    return;
}

int main() {
    int n;
    cin>>n;
    int firstdigit, lastdigit;
    int *ptr1 = &firstdigit, *ptr2 = &lastdigit;
    find(n, ptr1, ptr2);      // ptr1 and ptr2 are address.
    cout<<"First digit: "<<firstdigit<<endl;
    cout<<"Last digit: "<<lastdigit<<endl;


    return 0;
}