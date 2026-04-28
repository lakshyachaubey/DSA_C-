#include<iostream>
using namespace std;

// void print(int n){
//     int i = 1;
//     while(i<=n){
//         cout<<i<<endl;
//         i++;
//     }
// }
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     print(n);
//     return 0;



void print(int i,int n){  // using an extra parameter
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(1,n);
    return 0;

}
