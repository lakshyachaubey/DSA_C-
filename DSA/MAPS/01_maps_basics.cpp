#include<iostream>
#include<unordered_map>
using namespace std;

// class pair {
//     public:
//     int first;
//     string second;
// };  this is built in with pair STL

int main() {
    pair <int, string> p;   // this is a pair class, just like oops but ready made by default
    p.first = 10;
    p.second = "Hello";
    cout << p.first << " " << p.second << endl;


    unordered_map<string, int> m; 
    // m.insert("raghav", 76); this is wrong method
    // a pair will be inserted
    pair<string, int> p1;
    p1.first = "raghav";
    p1.second = 76;
    m.insert(p1);

    pair<string, int> p2;
    p2.first = "Lakshya";
    p2.second = 66;
    m.insert(p2);

    pair<string, int> p3;
    p3.first = "Manish";
    p3.second = 56;
    m.insert(p3);

    //  to ky hoga ki m naam ka ek dabba bnega jisme p1, p2, p3, pairs insert honge

    //  how to get elements, using for each loop

    for(pair<string, int> p: m) {
        cout << p.first << " " << p.second << endl;
    }

    // for each loop me pura syntax likhne ki jagah use auto 
    for(auto p: m) {  // auto automatically data type detect krleta h
        cout << p.first << " " << p.second << endl;
    }
    // TO HMESHA AUTO USE KRO

    // YE SB BAKWAAS TAREEKA THE INSERTION KE 
    // BETER TAREEKA

    cout<<endl;

    m["Rohit"] = 19;
    for(auto p: m) {  // auto automatically data type detect krleta h
        cout << p.first << " " << p.second << endl;
    }

    // HOW TO ERASE
    m.erase("Rohit"); // to rohit and uski value ht jayegi
    cout<<endl;
    for(auto p: m) {  // auto automatically data type detect krleta h
        cout << p.first << " " << p.second << endl;
    }
    // agar aap koi aisi ccheez erase kro jo hai hi nhi to usse koi error nhi aayega, bas kuch nhi hoga

    cout<<m.size()<<endl; // size of map
    
    return 0;
}