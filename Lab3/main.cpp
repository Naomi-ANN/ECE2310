#include <iostream>
#include <string>
#include "RPG.h"
using namespace std;

int main(){
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

// P1
    printf("%s Current stats\n" ,p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp:%f\t Level:%i\n", p1.gethits_taken(),p1.getluck(),p1.getexp(),p1.getlevel());
///P2
    printf("%s Current stats\n" ,p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp:%f\t Level:%i\n", p2.gethits_taken(),p2.getluck(),p2.getexp(),p2.getlevel());


///call setHitsTaken
p1.setHitsTaken(0);
p2.setHitsTaken(0);

cout<<"\nP1 hits taken";
cout<<p1.gethits_taken();

cout<<"\nP2 hits taken";
cout<<p2.gethits_taken();


////////////NOt done rn 
cout<<"0 is dead, 1 is alive\n";
cout<<p1.isAlive();
cout<<p2.isAlive();

return 0;
}
