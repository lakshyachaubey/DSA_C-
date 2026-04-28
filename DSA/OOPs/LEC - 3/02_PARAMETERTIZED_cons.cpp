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
    int enginesize;

    // Paramterized constructor;
    Bike (int tyresize, int enginesize){    // we can set default arguement like in functions
        this->tyresize = tyresize;
        this->enginesize = enginesize;
        cout<<"Constructor ko call hua !!"<<endl;
    }
};

int main() {

    Bike tvs(12, 100);    // Object creation // Constructor ko call jayegi
    Bike honda(13, 150);
    Bike Ninja(15, 350);
    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
    cout<<Ninja.tyresize<<" "<<Ninja.enginesize<<endl;
    



    return 0;
}