#include<iostream>
using namespace std;
int main() {
    int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = 9;
    int x = 20;

    for(int i = 0; i<9; i++){ 
        if(arr[i]>x){  // lower bound
            cout<<arr[i-1]<<endl;
            break;
        }
        // upper bound 
        /* if(arr[i]>x){
            cout<<arr[i]<<endl;
            break;
        } */
    }

    return 0;
}