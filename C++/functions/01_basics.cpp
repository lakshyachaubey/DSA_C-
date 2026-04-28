#include<iostream>
using namespace std;

void greet(){
    cout<<"Good Morning"<<endl;
    cout<<"Have a nice day"<<endl;
}

int sum(int a, int b){
    int c = a+b;
    return c;
}

int main() {
    greet();

    int x = 7, y = 3;
    int add = sum(x,y);
    cout<<add;
    return 0;
}