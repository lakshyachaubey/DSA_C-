#include<iostream>
using namespace std;
int main() {
    int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = 9;
    int x = 20;
    bool flag = false;
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == x){
            flag = true;
            cout<<arr[mid-1]<<endl;
            break;
        }
        else if(arr[mid] < x){
            low = mid+1;   // because since we are finding the lower bound mid can still be the lower bound. 
        }
        else if(arr[mid] > x){
            high = mid-1;  // if mid element is greater than the target then it can never be the lower bound of the target.
        }
    }
    if(flag == false){
        cout<<arr[high];
    }

    return 0;
}