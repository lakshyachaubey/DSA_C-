#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n>=91){
        cout<<"Excellent";
    }
    else{
        if(n>=71){
            cout<<"good";
        }
        else{
            if(n>=61){
                cout<<"Average";
            }
            else{
                if(n>=51){
                    cout<<"Can do better";
                }
                else{
                    cout<<"fail";
                }
            }
        }
    }
    return 0;
}