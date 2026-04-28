#include<iostream>
using namespace std;

void fun(){
    cout<<"Good Morning"<<endl;
    fun();
}

int main() {

    fun(); 
    return 0;
}


// this will result an infinite loop 

/*
pehle main function ke andar wala fun function call hua to "Good Morning"  print hua fir us fun function ke andar wala fun function call hua to fir print hua fir uske andar wale fun function call hua to fir print hua and this process continues


to break this infinite loop
we provide base case condition 
*/