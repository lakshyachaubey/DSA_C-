#include <iostream>
using namespace std;

class Player{
private:
    int health;
    int age;
    int score;
    bool alive;

public:  
    //GETTERS 
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }

    //SETTERS
    void setHealth(int health){
        this->health = health;
    }

    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setAlive(bool alive){
        this->alive = alive;
    }
};


int main(){

    Player harsh, raghav;    // Object creation, statically. means during compile time hi memory allocate ho jayegi, aur hum usme values set kar sakte hain.
    harsh.setHealth(100);
    harsh.setAge(20);
    harsh.setScore(65);
    harsh.setAlive(true);

    raghav.setHealth(80);
    raghav.setAge(25);
    raghav.setScore(25);
    raghav.setAlive(true);


    Player* urvi = new Player();   // Object creation, dynamically. means during runtime memory allocate hogi. or us anonymous object ka addres urvi naam ke Player class ke pointer variable me store ho jayega.

    // now 2 methods to access the member functions of the object pointed by urvi, either by using the dereference operator * or by using the arrow operator ->

    Player urviObject = *urvi;  // means urvi pointer jis object ko point krrha h YAA usme stored address pr jo object stored h usko urviObject naam ke player object me copy krdo.

    urviObject.setHealth(90);
    urviObject.setAge(22);
    // OR
    (*urvi).setScore(66);  // means urvi pointer jis object ko point krrha h YAA usme stored address pr jo object stored h uske score member variable me 66 set krdo.
    urvi->setScore(45);
    urvi->setAlive(true);

    cout<<"Urvi's Health: "<<urviObject.getHealth()<<endl;
    cout<<"Urvi's Age: "<<urviObject.getAge()<<endl;

    cout<<"Urvi's Score: "<<urvi->getScore()<<endl;
    cout<<"Urvi's Alive: "<<urvi->isAlive()<<endl;




    return 0;
}
