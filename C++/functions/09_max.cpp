#include<iostream>
using namespace std;

int max(int a, int b, int c){
    // int max;
    if(a>b && a>c){
        // max = a;
        return a;
    }
    else if(b>a && b>c){
        // max = b;
        return b;
    }
    else{
        // max = c;
        return c;
    }
    // return max;
}
int main() {
    int a = 2, b = 7, c = 9;
    cout<<max(a,b,c);
    return 0;
}