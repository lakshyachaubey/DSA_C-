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
    Student *std = new Student("Alice", 101, 85.5);  // Dynamic memory allocation // same as malloc
    
    cout << "Name: " << std->name << endl;
    return 0;

}
