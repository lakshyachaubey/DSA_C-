#include<iostream>
#include<vector>
using namespace std;
int main() {
    // vector<int> v;  
    // for(int i = 0; i<5; i++){
    //     cin>>v[i];
    // }   // will give error since we have not initialized the vector with size; we cannot access the elements of the vector without initializing it with size;

    /* vector<int> v(5);
    for(int i = 0; i<5; i++){
        cin>>v[i];
    } */  // CORRECT 


    // method - 2 when size not given;
    vector<int> v;
    for(int i = 0; i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }   // CORRECT

    return 0;
}