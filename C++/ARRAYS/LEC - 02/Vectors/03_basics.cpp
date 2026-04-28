#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v(5);
    cout<<v[0]<<endl;

    vector<int> v1(5, 10); // vector of size 5 and all elements are initialized to 10;
    cout<<v1[0]<<endl;
    return 0;
}