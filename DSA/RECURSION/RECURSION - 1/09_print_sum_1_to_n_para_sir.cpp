#include<iostream>
using namespace std;

void printsum(int sum, int n){
    if(n==0) {
        cout<<sum<<endl;
        return;
    }
    printsum(sum+n, n-1);
}
    
int main() {
    int number;
    cout<<"Enter number : ";
    cin>>number;
    int range;
    cout<<"Enter range : ";
    cin>>range;
    printsum(number, range);
    return 0;
}