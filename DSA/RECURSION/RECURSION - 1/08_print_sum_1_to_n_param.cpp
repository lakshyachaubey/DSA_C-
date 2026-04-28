#include<iostream>
using namespace std;

int printsum(int i, int n){
    if(i>n) return 0;
    int sum = i + printsum((i+1), n);
    return sum;
    }
    
int main() {
    int number;
    cout<<"Enter number : ";
    cin>>number;
    int range;
    cout<<"Enter range : ";
    cin>>range;
    cout<<printsum(number, range);
    return 0;
}