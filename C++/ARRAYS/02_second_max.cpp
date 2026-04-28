#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int max = arr[0];
    

    // Method 1 using double loop
    // finding max;
    // for(int i = 0; i < n; i++) {
    //     if(max < arr[i]) {
    //         max = arr[i];
    //     }
    // }

    // finding second max;
    // int smax = arr[0];
    // for(int i = 0; i < n; i++) {
    //     if(arr[i] != max && smax < arr[i]) {
    //         smax = arr[i];
    //     }
    // }

    // Method 2 using single loop
    int smax = arr[0];
    for(int i = 0; i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
        if(smax < arr[i] && arr[i] != max) {
            smax = arr[i];
        }
    }

    cout<<"Max is: "<<max<<endl;
    cout<<"Second max is: "<<smax<<endl;

    return 0;
}