// SORTING -> means to put elements in ascending/increasing or descending/non-increasing order. 

#include<iostream>
#include<vector>

using namespace std;
int main() {
    int v[5];
    int n = 5;
    cout<<"Enter 5 elements: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    cout<<endl<<"Before sorting: "<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    // BUBBLE SORT

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){    // 
            // more optimised j<n-1-i because after each pass the largest element is at the end of the array so we can ignore comparing it in the next pass
            if(v[j] > v[j+1]){
                int temp = v[j]; 
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
}
    cout<<endl;

    // AFTER SORTING
    cout<<endl<<"After sorting: "<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}