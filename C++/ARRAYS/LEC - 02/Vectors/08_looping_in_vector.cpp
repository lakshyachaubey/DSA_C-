#include<iostream>
#include <vector>
using namespace std;
int main() {
    
    // find last occurence of x in the vector;

    int x;
    cin>>x;
    vector<int> v;
    int idx = -1;
    for(int i = 0; i<8; i++){
        int y;
        cin>>y;
        v.push_back(y);
        if(y == x) {
            idx = i;
        
        }
    }


    cout<<idx<<endl;
    return 0;
}