#ifndef RPG_H
#define RPG_H
#include <string>
using namespace std;

const int INVENTORY_STD = 10;
const float HIT_FACTOR = 0.5;
const int MAX_HITS_TAKEN = 3;

class RPG{
    public:
    //constructors
    RPG(); //default
    RPG(string name, int hits_taken, float luck, float exp, int level); //overloaded

    //mutactors (func that chnages vars???)
    bool isAlive()const;
    void setHitsTaken(int new_hits);

    //accessors (go get it from user???)
    string getName() const;
    int gethits_taken() const;
    float getluck() const;
    float getexp() const;
    int getlevel() const;

    private:
    string name;
    int hits_taken;
    float luck;
    float exp;
    int level;

};



#endif RPG_H // why do I need the name here???