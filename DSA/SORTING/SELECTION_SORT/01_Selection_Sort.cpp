#include<iostream>
#include<limits>
#include<algorithm>

using namespace std;
int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int n = 5;
    for(int ele : arr){    // This is called for each loop;
        // for int element in arr
        cout<<ele<<" ";
    }

    cout<<endl;

    //Insertion Sort

    for(int i = 0; i<n-1; i++){   // for no. of passes

                // TO FIND MIN ELEMENT AND ITS INDEX
                int min = INT8_MAX;    // bht badi value daal di kyuki koi bhi value isse chhoti hogi to isko replace krdegi or min value to hmesha sbse chhoti hogi to sbko replace krdegi
                int minidx = -1;
                for(int j = i; j<n; j++){    // to find min element and its index
                    if(arr[j]<min){
                        min = arr[j];  
                        minidx = j;
                    }
                }  

                
        swap(arr[i], arr[minidx]);
        for(int ele : arr){    // This is called for each loop;
            // for int element in arr
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    for(int ele : arr){    // This is called for each loop;
        // for int element in arr
        cout<<ele<<" ";
    }
    return 0;
}