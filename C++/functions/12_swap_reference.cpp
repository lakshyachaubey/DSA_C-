#include <iostream>
using namespace std;
// void swap(int a, int b){    // (2.) Now the if we are storing a address then we will have to pass the address to the function

void swap(int* x, int* y){   // taking the address of variable stored in x;
    int temp = *x;   // x wale dabbe me jis variable ka address store h us variable ki value utha k lao. 
    *x = *y;  // with the help of pointer we can change the value of the variable whose address is stored in the pointer itself.
    *y = temp;
}

void swap2(int &a, int &b){
    int temp = a;
    a = b; 
    b = temp;
}

int main(){
    int a1 = 2;
    int b1 = 9;

    swap(&a1, &b1);   // passing the address of a1 and b1
    // this is pass by reference

    
    cout<<"a : "<<a1<<endl;
    cout<<"b : "<<b1<<endl;
    
    swap2(a1,b1);

    cout<<"a : "<<a1<<endl;
    cout<<"b : "<<b1<<endl;
    return 0;
}


// Dry run:

// 