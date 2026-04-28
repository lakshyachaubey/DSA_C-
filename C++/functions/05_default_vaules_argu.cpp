#include<iostream>
using namespace std;

void fun(int x = 10, int y = 20){
    cout<<x<<" "<<y<<endl;
}

void fun2(int x = 8, float y = 3.14){
    cout<<x<<" "<<y<<endl;
}

int main() {
    fun();
    fun(4, 6);
    fun(4);
    fun2(4.6);   // implicit type conversion will happen here and 4.6 will be converted to 4 .
    return 0;
}

// now 10 is default values of x and 20 is default value of y when line 9 is executed and line 10 is commented  but when a value is passed to the function then the default value is ignored and the passed value is used. In line 10 we are passing 4 and 6 to the function so the output will be 4 and 6 instead of 10 and 20.


// or agar default value derhe ho to sabko deni padegi

