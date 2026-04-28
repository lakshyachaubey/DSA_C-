#include<iostream>
using namespace std;

int reverse(int n){
    if(n==0) return 0;  // base case
    cout<<n<<endl;      // kaam (operation)
    reverse(n-1);   // call
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    reverse(n);
    return 0;
}