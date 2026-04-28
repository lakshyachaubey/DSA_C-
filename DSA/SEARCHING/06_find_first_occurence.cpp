#include<iostream>
using namespace std;
int main() {
    int arr[12] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 5, 6, 7};
    int n = 12;
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int low = 0; 
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x){   // now checking if it is the first occurence or not?
            flag = true;
            if(arr[mid-1]==x) high = mid-1;   // if usse pehle bhi same no. aarha h to ye first occurence nhi hoga
            else{
                cout<<mid<<"\tYes this is the first occurence"<<endl;
                break;
            }
        }
        else if(arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    if(flag == false){
        cout<<"#404 Element not found!";
    }
    return 0;
}