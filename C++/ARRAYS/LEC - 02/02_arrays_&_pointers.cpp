#include<iostream>
using namespace std;
int main() {
    
    int arr[] = {1, 2, 4, 5, 6};
    // int *ptr = arr;   ✅
    // int *ptr = &arr[0];  ✅
    
    // int *ptr = &arr;  ❌
    // int *ptr =  x; ❌

    // int *ptr = &x; ✅ if x is a variable;




    return 0;
}