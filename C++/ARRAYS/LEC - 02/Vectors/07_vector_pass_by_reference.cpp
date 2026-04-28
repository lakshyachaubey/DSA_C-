#include<iostream>
#include <vector>
#include <algorithm> // for sort function
using namespace std;

void change(vector<int> a){
    a[0] = 100;
} 

void change2(vector<int>& a){    // passing the address of the vector to the function; changes made to the vector in the function will affect the original vector in the main function;
    a[0] = 100;
}

// vectors are passed by value in C++; Each time you pass a vector, new array is created in the function;

int main() {
    vector<int> v;
    v.push_back(7);
    v.push_back(4);     
    v.push_back(6);     
    v.push_back(2);      

    
    for(int i = 0; i<v.size(); i++) {  
        cout << v[i] << " ";
    }
    cout<<endl;
    change(v);
    // change will not occur
    for(int i = 0; i<v.size(); i++) {  
        cout << v[i] << " ";
    } 

    cout<<endl;
    change2(v);

    // change will occur
    for(int i = 0; i<v.size(); i++) {
        cout << v[i] << " ";
    }


    return 0;
}