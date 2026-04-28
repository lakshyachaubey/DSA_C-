#include<iostream>
#include <vector>
#include <algorithm> // for sort function
using namespace std;
int main() {
    vector<int> v;
    v.push_back(7);
    v.push_back(4);     
    v.push_back(6);     
    v.push_back(2);      

    v.at(2) = 90;
    for(int i = 0; i<v.size(); i++) {  
        cout << v[i] << " ";
    }
    cout<<endl;

    // SORT;

    sort(v.begin(), v.end()); // O(nlogn) operation; sorts the vector in ascending order; v.begin() returns an iterator pointing to the first element of the vector; v.end() returns an iterator pointing to the past-the-end element of the vector;
    for(int i = 0; i<v.size(); i++) {  
        cout << v[i] << " ";
    }
    cout<<endl;

    return 0;
}