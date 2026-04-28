#include<iostream>
using namespace std;

void fun(int n){  // this is a formal argument
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    fun(n-1);
}

int main() {

    fun(3);   // this is actual arguement
    return 0;
}


// this will result an infinite loop 

/*
pehle main function ke andar wala fun function call hua to "Good Morning"  print hua fir us fun function ke andar wala fun function call hua to fir print hua fir uske andar wale fun function call hua to fir print hua and this process continues


to break this infinite loop
we provide base case condition 

now this is recursion
*/