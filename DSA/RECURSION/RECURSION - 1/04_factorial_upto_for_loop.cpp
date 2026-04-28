#include<iostream>
using namespace std;

void factupto(int n){
    int f=1;
    /* for(int j = 1; j<=n; j++){
        int f = 1;
        for(int i = 2; i <= j; i++){
            f*=i;
        }
        cout<<f<<endl;
    }*/    // time complexity for this code is worse

    // instead

    for(int i = 1 ; i<=n; i++){
        f*=i;
        cout<<f<<endl;
    }
}
int main() {
    factupto(5);
    return 0;
} 