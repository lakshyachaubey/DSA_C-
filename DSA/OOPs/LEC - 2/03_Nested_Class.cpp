#include<iostream>
using namespace std;

class Gun{
    public:
    int damage;
    int range;
    int ammo;
};

class Player{
    private:
    int health;
    int age;
    bool isAlive;
    Gun gun;  // This is a nested class, where we used a object of class Gun as a data member of class Player, mtlb player class ki properties me ek gun or us gun ki properties bhi include hogyi. or us gun ki properties Gun class me defined h.

    // Here we imported a object of the class, but we can also make a class inside another class. 

    public:
    // GETTERS
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    bool getIsAlive(){
        return isAlive;
    }
    // Getter for Gun
    Gun getGun(){
        return gun; // this will return the gun object, jisme gun ki properties hongi, jaise damage, range, ammo.
    }

    // SETTERS
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setIsAlive(bool isAlive){
        this->isAlive = isAlive;
    }

    void setGun(Gun gun){
        this->gun = gun;  // this->gun means is wali class ka gun = gun(parameter)
    }

};


int main() {
    Player harsh, raghav;
    Player *urvi = new Player;  // Dynamic memory allocation for a Player object, urvi is a pointer to a Player object, and we are allocating memory for it using new keyword.

    Gun akm;
    akm.damage = 50;
    akm.range = 100;
    akm.ammo = 30;
    
    harsh.setAge(25);
    harsh.setHealth(100);
    harsh.setIsAlive(true);
    harsh.setGun(akm);
    

    Gun awm;
    awm.damage = 100;
    awm.range = 200;
    awm.ammo = 10;
    
    raghav.setAge(30);
    raghav.setHealth(100);
    raghav.setIsAlive(true);
    raghav.setGun(awm);


    cout<<"AWM Dammage: "<<awm.damage<<endl;
    cout<<"Raghav's AWM Dammage: "<<raghav.getGun().damage<<endl;
    return 0;
}