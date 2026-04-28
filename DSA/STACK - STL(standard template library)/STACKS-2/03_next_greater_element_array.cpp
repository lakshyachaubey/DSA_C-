#include<iostream>
using namespace std;
int main() {
    int arr[8] = {3,1,2,5,4,6,2,3};
    for(int i = 0; i<8; i++){
        // int found = 0;
        // int current = arr[i];
        // arr[i] = -1;  // by default set to -1, if greater element is found then update it otherwise it will remain -1
        for(int j = i+1; j<8; j++){  
            if(j==8) arr[i] = -1;
            // if(arr[j]>current){
            if(arr[j]>arr[i]){ 
                arr[i] = arr[j];
                // found = 1;
                break;
            }else{
                continue;
            }
        }
        // if(found == 0) arr[i] = -1;
        cout<<arr[i]<<" ";
    }

    return 0;
}