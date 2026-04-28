#include<iostream>
using namespace std;

// using loops
int power(int a, int b){
    if(a==0) return 0;
    if(a==0 && b==0) return -100;
    int p = 1;
    for(int i = 1; i<=b; i++){
        p*=a;
    }
    return p;
}

// using recursion
// a^b = a^b * a^(b-1)
int power_rec(int a, int b){
    if(b==0) return 1;
    return a * power_rec(a, b-1);
}

int main() {
    int a,b;
    cout<<"Enter base : ";
    cin>>a;
    cout<<"Enter power : ";
    cin>>b;
    cout<<power(a,b)<<endl;

    cout<<power_rec(a,b);
    return 0;
}