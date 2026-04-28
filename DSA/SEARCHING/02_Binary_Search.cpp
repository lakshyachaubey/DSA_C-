// Binary  search works only if array is sorted

// Time complexity -> O(log n) -> better than linear search

#include<iostream>
using namespace std;
int main() {

    int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = 9;
    int x;
    cout<<"Enter key";
    cin>>x;

    int low = 0;
    int high = n-1;

    while(low<=high){

        int mid = low + (high-low)/2;

        if(arr[mid] == x) {
            cout<<arr[mid]<<"\nTarget found"<<endl;
            break;
        }
        else if(arr[mid] < x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return 0;
}