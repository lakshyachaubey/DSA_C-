#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 4, 5, 3, 6};
    int *ptr = arr;
    for(int i = 0; i<6; i++){
        cout<<ptr[i]<<" ";
        // i[ptr] is also valid and will give the same output as ptr[i]
        // i[arr] is also valid and will give the same output as arr[i]
    }
    cout<<endl;
    
    // ptr[0] = 8;
    // or 
    // arr[0] = 8;
    // or
    // *ptr = 8;

    // all cases are valid and base value will be updated to 8
    *ptr = 8;  // or // ptr[0] = 8;
    for(int i = 0; i<6; i++){
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

    ptr = arr; // resetting the pointer to the base address
    *ptr = 10; // updating the value at the base address to 10
    ptr++; // moving the pointer to the next element
    *ptr = 20; // updating the value at the second element of the array to 20
    ptr--; // moving the pointer back to the base address
    for(int i = 0; i<6; i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}