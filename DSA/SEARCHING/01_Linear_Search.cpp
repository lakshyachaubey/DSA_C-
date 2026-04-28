//  Tine complexity - > O(n)

#include<iostream>
using namespace std;
int main() {
    int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int flag = 0;
    int n = 9;
    int x;
    cout<<"Enter key\t";
    cin>>x;

    for(int i =0; i<n; i++){
        if(arr[i] == x){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<x<<"\ttarget found"<<endl;
    }
    else{
        cout<<"target missing"<<endl;
    }
    return 0;
}