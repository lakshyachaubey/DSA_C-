#include<iostream>
using namespace std;

class Gun{
    public:
    int damage;
    int range;
    int ammo;
};

class Player{      // MAIN CLASS
    private:
    int health;
    int age;
    bool isAlive;
    Gun gun;

    class Helmet{    // making Class inside class  // NESTED CLASS
            int level;
            int hp;

            public:
            // GETTERS
            int getLevel(){
                return level;
            }
            int getHp(){
                return hp;
            }
            // SETTERS
            void setLevel(int level){
                this->level = level;
            }
            void setHp(int hp){
                this->hp = hp;
            }

            void setHelmet(int level){   // jb setLevel se level ko input lenge to wo level member data me save ho jayega fir waha se wo as a parameter setHelmet function me jayega.
                Helmet *helmet = new Helmet;  // Dynamic Allocation/  making object in runtime
                helmet->setLevel(level);
                int health = 0;
                if(level == 1) health = 25;
                else if(level == 2) health = 50;
                else if(level == 3) health = 100;
                else cout<<"Invalid Helmet Level"<<endl;
                helmet->setHp(health);
                this->helmet = *helmet;
            }
        };
        
    Helmet helmet;

        

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