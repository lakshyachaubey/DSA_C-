#include<iostream>
using namespace std;

class Player{     // This is a Class (BLUEPRINT)
    private:
    int score;
    int health;
    string name;

    public:
    void showinfo(int score, int health, string name){
        this->score = score;
        this->health = health;
        this->name = name;           // if we use same parameter name as data member then we use (this->) to differentiate, this->score means is wali class ka score = score(parameter)
    }

    void showinfo2(){ 
        cout<<score<<endl;
        cout<<health<<endl;
        cout<<name<<endl; 
        
    }
};



int main() {
    Player p1; // This is a object, instance of the class(us blueprint se bani hui actual cheez);

    // Abhi tk koi memory allocate nhi hui hai, jab hum object banayenge tab memory allocate hogi, aur uske baad hum usme values set kar sakte hain.

    // p1.score = 100;  
    // p1.health = 50;
    // p1.name = "Player1";    private data members ko set nhi krskta

    // cout<<p1.score<<endl;
    // cout<<p1.health<<endl;
    // cout<<p1.name<<endl;

    // This will throw an error because the **data_members_of_the_class_are_by_default_private** , means we cannot access them directly from outside the class.

    // to access of change data members we use member functions, and make them public.

    p1.showinfo(100, 50, "Player1");

    // cout<<p1.score<<endl;
    // cout<<p1.health<<endl;
    // cout<<p1.name<<endl;      this will still give error because again we are trying to access private data members directly, instead we can print the values inside the showinfo function.

    p1.showinfo2();   

    return 0;

}