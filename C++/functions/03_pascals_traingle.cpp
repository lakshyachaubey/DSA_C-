#include<iostream>
using namespace std;

int factorial(int n) {    // function ke arg ument me hm wo lihte h jo hmara data type hoga, aur jo hm function me pass krte h. function ke andar hm us data type ke variable ko use karte h
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r) {
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));  
    return ncr;
}

int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout<<combination(i, j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// function me jo hm pass krte h uske hisaab se argument likhte h like , function me hm jo pass krte h wo value ya  address jis chiz me store hoti h usko argument me lihkte h

// like agar mene address pass kiya to address pointer me store hota h to mujhe function argument me pointer likhna hoga.