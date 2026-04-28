// CONSTRUCTOR is a hidden function that initializes or creates class objects and allocates memory.
    /*
    Constructor are of 3 types 
    1. Default Constructor: A constructor that takes no parameters and initializes the object with default values. It is automatically provided by the compiler if no other constructors are defined in the class.

    2. Parameterized Constructor: A constructor that takes parameters and initializes the object with the provided values. It allows us to create objects with specific initial values.

    3. Copy Constructor: A constructor that creates a new object as a copy of an existing object. It is used when we want to create a new object with the same values as an existing object.
    
    But we can make constructor of our own.

    constructor is VERY VERY MUCH SIMILAR TO FUNCTIONS.
    */

#include<iostream>
using namespace std;

class Bike{
    public:
    int tyresize;

    // Default constructor;
    Bike (){       // Default Constructor ka koi naam nhi hota h and iska return type hmesha class type hi hoga.   // NOTE -BIKE IS NOT CONSTRUCTOR NAME, it is a return type    , default constructor hidden hota h agar nhi banaye to bhi kaam krega, hmne yaha khud se bnaya kyuki hme call check krna tha.
        cout<<"Constructor ko call hua !!"<<endl;
    }
};

int main() {

    Bike tvs;    // Object creation // Constructor ko call jayegi
    Bike honda;
    Bike Ninja;
    
    



    return 0;
}