#include<iostream>
#include <vector>
using namespace std;
int main() {
    // find doublets whose sum is equal to target. also find the index;

    int x;
    cout<<"Enter target : ";
    cin>>x;
    cout<<endl;

    vector<int> v;
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    cout<<endl;
    
    cout<<"Enter array elements : ";
    for(int i = 0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i = 0; i<v.size(); i++){
        for(int j = i+1; j<v.size(); j++){
            if(v[i] + v[j] == x) {
                cout<<"Doublet found at index : "<<i<<" and "<<j<<endl;
            }
        }
    }
    return 0;
}