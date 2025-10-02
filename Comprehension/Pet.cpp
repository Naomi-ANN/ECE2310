#include <iostream>
#include <string>
#include "Pet.h"

Pet::Pet(){ // add this --> if needed idk
    name = "";
    age = 0;
    owner = "";
   isHouseTrained = 0; //is house traineed Bool idk 
}

/// @brief 
/// @param name 
/// @param age 
/// @param owner 
/// @param isHouseTrained 
Pet::Pet(string name, int age, string owner,bool isHouseTrained){
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;
}

////boolean checiing if ture vs flase
bool Pet::isHouseTrained()const{
if(isHouseTrained = 1){
        return true;
    }else{
        return false;
    }
}
/**
 * @brief 
 * 
 * @return string 
 */
string Pet::getName()const{ 
        return name;
    }
    /// @brief Age
    /// @return 
    int Pet::getAge()const{
        return age; ///////may need to change this 
    }

//owner
string Pet::getOwner()const{ 
        return owner;
    }


