// Accessing the elements of an array in functions

#include<iostream>
using namespace std;

void display(int arr[]) {  // no need to give the size of the array in the function
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }// we can access the value of the array in the function
}

void change(int arr[]) {
    arr[0] = 100; // we can change the value of the array in the function
    
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    display(arr); // we only pass the name of
    cout<<endl;
    change(arr); // we only pass the name of the array
    display(arr);

    return 0;
}

// Arrays in C are passed by reference, not by value, allowing the function to modify the original array.

// usually hmesha hm argument me size bhi dete h. in casses where we have to use loop 