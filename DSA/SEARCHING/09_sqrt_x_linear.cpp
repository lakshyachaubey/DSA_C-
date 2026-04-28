// Using linear

#include<iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int i = 1;
    while(i){
        if(i*i == x){
            break;
        }
        i++;
    }
    cout<<"Sqrt of x = "<<i;
    return 0;
}