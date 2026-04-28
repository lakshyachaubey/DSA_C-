// find size of array

#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,3, 4,5 ,6 ,7 ,8, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    return 0;
}