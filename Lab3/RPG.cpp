using namespace std;
#include <string>
#include "RPG.h"

//RPG::(scope) we set default values
RPG::RPG(){
    name = "";
    hits_taken = 0;
    luck = 0;
    exp = 0;
    level = 0;
}

// this scope ties the constructor in .cppp to the .h files 
// here we are pointing to this means that this var is from .h , itsd saying that this var name from .h is equal to our var in our .cpp
RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}

// mutactor we are changing var from the class (getting users name????)
//Hits taken 
void RPG::setHitsTaken(int new_hits){
    this->hits_taken = new_hits; //pointing to something in .h and renaming here 
}


//is alive mutator, shes tells us this in RPG.h
/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool RPG::isAlive()const{

    if(hits_taken < MAX_HITS_TAKEN){
        return true;
    }else{
        return false;
    }
}

    /// our get functions  do we have to do this bc they r private?????, onlt class asses huh
    string RPG::getName()const{ 
        return name;
    }

    int RPG::gethits_taken()const{
        return hits_taken;
    }
    float RPG::getluck()const{
        return luck;
    }

    float RPG::getexp()const{
        return exp;
    }

    int RPG::getlevel()const{
        return level;
    }


