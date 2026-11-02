#include<iostream>
using namespace std;

class Student{
public:
    int age;

    Student(int a){    //THIS IS CONSTRUCTOR
        cout<<"Constructor called"<<endl;  
        age = a;
    }
};

int main(){
    Student s1(20);

    cout<<s1.age;
    return 0;
}


//  Iska kaam hota hai object ko initialize karna.
/*
    Jab object banega:
    Node a(10);
    to constructor automatically call hoga aur data = 10 set ho jayega.
    */

/* Constructor ko class ka hi naam dete hain */

