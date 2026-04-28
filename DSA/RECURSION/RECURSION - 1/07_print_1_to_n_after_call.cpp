#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return; // base case 
    print(n-1);  // call
    cout<<n<<endl;  // kaam 
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(n);
    return 0;
}

// this is the same reverse code but

// yaha pe call ke baad kaam horha h to 
