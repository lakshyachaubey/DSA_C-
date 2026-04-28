#include<iostream>
using namespace std;
int main() {
    int n;cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    // input
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter element you want to search: ";
    cin>>x;
    //search
    int check = 0; // let not found
    for(int i =0; i<n; i++){
        if(arr[i]==x){
            check = 1;
        break;
        }
    }
    if(check == 1){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}

 // if we dont use checkmark boolean variable then it will print element not found for every element in the array which is not equal to x. so we can use checkmark boolean variable to avoid this problem.