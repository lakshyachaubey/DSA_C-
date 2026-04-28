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
        this->health = health;   // **this** is used to refer to the current object, it is used to differentiate between the parameter and the member variable with the same name.  this.health means is wali class ka health = health(parameter)
        
        // other method is 
        // Player::health = health;  // player wali class ka health = health(parameter)

        // or you can simply change parameter name 

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

int addScore(Player a, Player b){               // Passing objects as parameters to a function, we can access the member variables of the objects using the getter functions and perform operations on them.    // addScore function 2 parameter lega jo Player type ke hone chahiye,(mtlb player ke objects), aur ye function unke scores ko add karke return karega.
        return a.getScore() + b.getScore();
    }

// Agar me class ko pass kra skta hu to return bhi to kra skta hu 
Player getMaxScore(Player a, Player b){
    if(a.getScore() > b.getScore()){
        return a;  // agar a ka score b se zyada hai to a ko return karo
    }
    else{
        return b;  // agar b ka score a se zyada hai to b ko return karo
    }
}

// Abhi tk koi memory allocate nhi hui hai, jab hum object banayenge tab memory allocate hogi, aur uske baad hum usme values set kar sakte hain. QA


int main(){

    Player harsh, raghav;   //now memory is allocated statically for the object harsh, and we can set values for its member variables using the setter functions.
    harsh.setHealth(100);
    harsh.setAge(20);
    harsh.setScore(65);
    harsh.setAlive(true);

    raghav.setHealth(80);
    raghav.setAge(25);
    raghav.setScore(25);
    raghav.setAlive(true);

    cout<<addScore(harsh, raghav)<<endl;    // we are passing the objects harsh and raghav to the function addScore, which will return the sum of their scores.

    getMaxScore(harsh, raghav);  // this will return the object which has the maximum score, but will print nothing because we are not storing the return value in any variable or printing it.

    Player maxPlayer = getMaxScore(harsh, raghav);  // storing the returned object in a variable
    cout<<"Max Score Player: "<<maxPlayer.getScore()<<endl;  // printing the score of the max player
    cout<<"Max Health Player: "<<maxPlayer.getHealth()<<endl;


    return 0;
}


















// healp memory means -> Heap memory is a region of memory used for dynamic memory allocation. It allows you to allocate and deallocate memory at runtime, which is useful when you don't know the size of the data you need to store in advance. so        ** HEAP MEMORY IS THE MEMORY ALLOCATED DURING RUNTIME** . In C++, you can use the `new` operator to allocate memory on the heap and the `delete` operator to deallocate it. 