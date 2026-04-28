#include<iostream>
#include<algorithm>

using namespace std;
int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int n = 5;
    for(int ele : arr){    
        cout<<ele<<" ";
    }

    cout<<endl;

    //Insertion Sort

    for(int i = 0; i<=n-1; i++){   // swapping starts from second element
        int j = i;
        // while (j>=1){
        //     if(arr[j]>=arr[j-1]) break;
            
        //     else swap(arr[j], arr[j-1]);   // means arr[j] < arr[j-1]
        //     j--;
        // }
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    for(int ele : arr){    // This is called for each loop;
        // for int element in arr
        cout<<ele<<" ";
    }
    return 0;
}