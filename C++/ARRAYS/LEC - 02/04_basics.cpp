#include<iostream>
using namespace std;

void display(int *a, int size){    //WE CAN ALSO USE int *a INSTEAD OF int a[], because both are same both are address of the first element of the array
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
}

int main() {
    int arr[]= {1, 2, 4, 5, 6};
    display(arr, 5);
    return 0;
}