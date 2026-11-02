#include<iostream>
#include<unordered_set>

using namespace std;
int main() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // for each loop
    for(int ele : s){
        cout << ele << " ";
    }
    s.erase(3);
    cout << endl;
    for(int ele : s){
        cout << ele << " ";
    }
    cout<<endl;
    // for each loop with auto
    for(auto x : s){
        cout << x << " ";
    }


    int target = 3; 
    // to check if an element is present in the set, and if it is not found it returns the last element of the set.

    // s.find()-> it searches in the set, and if found 
    if(s.find(target) != s.end()){
        cout << "Element " << target << " is present in the set" << endl;
    } else {
        cout << "Element " << target << " is not present in the set" << endl;
    }
    return 0;
}

// s.find() searches in set and if not found returns s.end() which is an iterator pointing to the end of the set. If found it returns an iterator pointing to the element in the set.