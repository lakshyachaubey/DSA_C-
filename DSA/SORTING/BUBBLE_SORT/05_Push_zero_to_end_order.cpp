
#include<iostream>
#include<vector>

using namespace std;
int main() {
    int arr[] = {1, 2, 4, 0, 3, 7, 0, 9, 6, 8, 0, 5};
    int n = sizeof(arr)/sizeof(arr[0]); 

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    // BUBBLE SORT

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){    // 
            if(arr[j]==0){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout<<endl;

    // AFTER SORTING
    cout<<endl<<"After sorting: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}