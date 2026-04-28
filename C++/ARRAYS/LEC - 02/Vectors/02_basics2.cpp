#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;  

    v.push_back(7);    // size = 1, capacity = 1
    v.push_back(4);     // size = 2, capacity = 2
    v.push_back(6);     // size = 3, capacity = 4 (capacity is doubled when size exceeds current capacity)
    v.push_back(2);      // size = 5, capacity = 8
    v.push_back(9);     // size = 6, capacity = 8
    v.push_back(7);     // size = 7, capacity = 8
    v.push_back(4);    // size = 8, capacity = 8    
    v.push_back(6);     // size = 9, capacity = 16 (capacity is doubled when size exceeds current capacity)
    v.push_back(2);     // size = 10, capacity = 16
    v.push_back(9);    // size = 11, capacity = 16
    v.push_back(7);         // size = 12, capacity = 16
    v.push_back(4);         // size = 13, capacity = 16
    v.push_back(6);        // size = 14, capacity = 16
    v.push_back(2);      // size = 15, capacity = 16
    v.push_back(9);     // size = 16, capacity = 16
    v.push_back(7);     // size = 17, capacity = 32 (capacity is doubled when size exceeds current capacity)
    

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