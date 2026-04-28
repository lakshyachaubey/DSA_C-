#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;  

    v.push_back(7);  // O(1) operation;
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(9);

    for(int i = 0; i<v.size(); i++) {  
        cout << v[i] << " ";
    }
    cout<<endl;
    cout<<v.capacity() << endl;
    cout<<endl;

    v.pop_back(); // O(1) operation; removes the last element of the vector;
    for(int i = 0; i<v.size(); i++) {  
        cout << v[i] << " ";
    }
    cout<<endl;

    cout<<v.capacity() << endl; // O(1) operation; capacity is the total size of the vector; it is always greater than or equal to the size of the vector;
    return 0;
}