// SORTING -> means to put elements in ascending/increasing or descending/non-increasing order. 

#include<iostream>
#include<vector>
#include<algorithm> // for sort() function
using namespace std;
int main() {
    vector<int> v(5);
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>v[i];
    }
    
    cout<<endl<<"Before sorting: "<<endl;
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }

    // BUILT-IN Function
    sort(v.begin(), v.end()); // sorts in ascending order by default
    // O(n log n) -> time complexity of sort() function
    

    cout<<endl<<"After sorting: "<<endl;
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    // Sort in reverse
    // sort(v.end(), v.begin()); // sorts in descending order  // THIS IS WRONG
    reverse(v.begin(), v.end()); // this is the correct way to sort in reverse order
    cout<<endl<<"After sorting in reverse: "<<endl;

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}