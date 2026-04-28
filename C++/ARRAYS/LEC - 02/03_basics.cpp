// lec 02


#include<iostream>
using namespace std;
int main() {
    int arr[] = {4, 2, 1, 5, 6};
    int *ptr = arr; // base address will be stored.
    cout<<ptr<<endl;
    cout<<ptr[0]<<endl;

    /*
    int *ptr = arr;  // ✅
    int *ptr = &arr[0];  // ✅
    int *ptr = arr[0]; // ❌ 
    int *ptr = &arr;  // ❌
    int *ptr = x;  // ❌  
    int *ptr = &x;  // ✅ if x is a variable
    */

    for(int i = 0; i < 5; i++) {
        cout << *ptr <<" "; // dereferencing the pointer to get the value
        ptr++; // moving the pointer to the next element
    }  // sahi h 
    // this will print the array. which proves that 
    
    // IF I HAVE GIVEN THE BASE ADDRESS OF THE ARRAY TO THE POINTER THEN I CAN ACCESS THE ELEMENTS OF THE ARRAY USING POINTER ARITHMETIC

    cout<<endl;

    ptr = arr; // resetting the pointer to the base address
    for(int i = 0; i<5; i++){
        cout<<ptr[i]<<" ";
    }
    // this will also print the array
    cout<<endl;

    // ptr[0] = 100;  ==>> *ptr = 100; // both are same changes the values at the base address // changing the value of the first element of the array using pointer
    // for(int i = 0; i<5; i++){
    //     cout<<ptr[i]<<" ";
    // }
    // this will also print the updated array
    


    return 0;
}