#include<iostream>
using namespace std;
int main() {

    // using BINARY SEARCH (main aim of binary search to reduce the search space in half);

    int arr[8] = {0, 1, 2, 3, 4, 8, 9, 12};
    int n = 8;
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        // Agar arr[mid] == i hai to mid se pehle(left) ke saare elements bhi apne index pe hi honge.
        if(arr[mid] == mid){
            low = mid + 1;
        }
        else{ 
            ans = mid;
            high = mid - 1;
        }
    }
    cout<<"Missing Element is : "<<ans;
        
    return 0;
}