#include<iostream>
#include<vector>
using namespace std;

// problem in array is fixed size;
// we cannot change the size of the array once it is declared;

int main() {
    vector<int> v;  // you need not to mention size; 
    // how to insert elements in vector;

    v.push_back(7);  // O(1) operation;
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(9);
    // how to access elements in vector;
    cout << v[0] << endl;  // O(1) operation;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;
    cout<<"Size of vector: " << v.size() << endl; // O(1) operation;  size is the number of elements in the vector;

    for(int i = 0; i<v.size(); i++) {  
        cout << v[i] << " ";
    }
    cout<<endl;
    cout<<v.capacity() << endl; // O(1) operation; capacity is the total size of the vector; it is always greater than or equal to the size of the vector;
    return 0;
}