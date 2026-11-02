#include<iostream>
#include<map>

using namespace std;
int main() {
    map<int, int> m;
    m[5] = 10;
    m[3] = 6;
    m[7] = 14;
    m[5] = 20; // This will update the value for key 5
    for(auto x:m){
        cout<<x.first<< ": "<<x.second<<endl;
    }

    cout<<endl;
    map<string, int> m1;
    m1["Lakshya"] = 10;
    m1["Aditya"] = 6;
    m1["Sahil"] = 14;
    m1["Lakshya"] = 20; // This will update the value for key "Lakshya"
    for(auto x:m1){
        cout<<x.first<< ": "<<x.second<<endl;
    }
    return 0;
}