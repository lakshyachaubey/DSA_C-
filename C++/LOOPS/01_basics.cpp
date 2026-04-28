#include<iostream>
using namespace std;
int main() {
    int n;
    int count=0;
    cin>>n;
    int a = n;
    while(n>0){
        n=n/10;
        count++;
    }
    if(a==0){
        count= 1;
    }
    cout<<count;
    return 0;
}