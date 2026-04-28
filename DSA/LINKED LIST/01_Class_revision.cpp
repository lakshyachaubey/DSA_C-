#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float marks;
    Student(string n, int r, float m){
        name = n;
        rno = r;
        marks = m;
    }
};

void change(Student p){
    p.name = "Bob";
}

void changeByReference(Student *p){
    p->name = "Bob";
}

int main() {
    Student s1("Alice", 101, 85.5);
    cout << "Name: " << s1.name << endl;


    // POINTERS IN CLASS 
    change(s1);
    cout << "Name after change: " << s1.name << endl; // Output will still be "Alice" because we passed by value, not by reference

    // TO FIX THIS, WE CAN PASS THE OBJECT BY REFERENCE
    changeByReference(&s1);
    cout << "Name after change by reference: " << s1.name << endl;

    Student *ptr = &s1;
    ptr->name = "Charlie";  // s1.name = charlie
    cout << "Name after changing through pointer: " << s1.name << endl;

    return 0;

}