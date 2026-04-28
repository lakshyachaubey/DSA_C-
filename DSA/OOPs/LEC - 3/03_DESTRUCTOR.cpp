// DESTRUCTOR destroys object  --> means jis object ka kaam nhi hai us object ke  memory space ko khaali krega

// Destructor is also by default hidden but when we can make our own to check destructor call

// Destructor call when object goes out of scope;

// same formation as constructor bs sbse pehle ek tilde character lga do - and always default.


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

    ~Bike(){
        cout<<"Destructor ko call hua !!"<<endl;
    }  // this is destructor,  DESTRUCTOR tb call hota h jb object ka scope khtm hota h, 
};

int main() {

    Bike tvs(12, 100);    // Object creation // Constructor ko call jayegi
    Bike honda(13, 150);
    Bike Ninja(15, 350);

    bool flag = true;
    if(flag == true){
        Bike BMW(17, 1000);
        cout<<BMW.tyresize<<" "<<BMW.enginesize<<endl;
    }
    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
    cout<<Ninja.tyresize<<" "<<Ninja.enginesize<<endl;

    // Is case me object ka scope main function tha to jaise hi main function khtm hua destructor ko call gyi 
    return 0;
}