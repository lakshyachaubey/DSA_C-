#include<iostream>
#include <vector>
using namespace std;
int main(){
    
    // find last occurence of x in the vector;

    vector<int> v;
    v.push_back(7);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(9);
    v.push_back(2);
    v.push_back(7);

    int x;
    cin>>x;
    int idx = -1;

    // for(int i = 0; i<v.size(); i++){
    //     if(v[i] == x) {
    //         idx = i;
    //     }
    // }

    // cout<<idx<<endl;

    // METHOD -2 

    for(int i = v.size() - 1; i>=0; i--){
        if(v[i] == x) {
            idx = i;
            break;
        }
    }
    cout<<idx<<endl;
    return 0;
}