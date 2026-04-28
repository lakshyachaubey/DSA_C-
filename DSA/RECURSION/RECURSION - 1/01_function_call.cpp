#include<iostream>
using namespace std;

int product(int a, int b){
    return a*b;
}

void greet(){
    cout<<"Good Morning";
    return;   // Khatam
    cout<<"Uselss";  // return ke neeche kuch bhi likha ho that is useless
     // return is compulsory in int function but optional in void function
}

int main() {
    int x = product(2,4);  // thi is called function call

    cout<<x<<endl;

    greet();  //this is function call
    return 0;
}