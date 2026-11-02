// also by making function using both methods
#include <iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a1, b1;
    cout<<"Enter a : ";
    cin>>a1;
    cout<<"Enter b : ";
    cin>>b1;

    swap(a1, b1);

    cout<<"a : "<<a1<<endl;
    cout<<"b : "<<b1;
    return 0;
}

// This will not swap the numbers because of pass by value;

/*   let's suppose we input 7 and 5, this will store in a1 and b1. and then passed to a and b, now a=7 and b=5. now the swap function will execute and then a=7 and b will be 5. 
but this value of a and b are not getting passed to a1 and b1 again. a1 and b1 are still 7 and 5. so the output will be 7 and 5.

this is pass by value.   */


// Variable ko hm memory me jaha bhi dabbe me store krate h us dabbe ka address hota h.

// to pass by reference me hm a1 b1 ki address function me bhejte h fir wo function us address se value access krta h or function execute hota h or values change hoti h using the help of POINTERS