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
    printf("%sCurrent stats\n" ,p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp:%f\t Level:%i\n", p2.gethits_taken(),p2.getluck(),p2.getexp(),p2.getlevel());

///call setHitsTaken
//put 3 here to make it do the test to see if isAlive works
p1.setHitsTaken(3);
p2.setHitsTaken(0);

//hits taken mutator is not workin!!!!!! - numbers are not changing are they meant to change???
cout<<"\nP1 hits taken ";
cout<<p1.gethits_taken()<<endl;

cout<<"\nP2 hits taken ";
cout<<p2.gethits_taken();
cout<<"\n";

//isAlive mutator is not working
cout<<"0 is dead, 1 is alive\n " <<endl;
cout<<p1.isAlive();//How do I add new lines here 
cout<<"\n";//new line added here for neatness
cout<<p2.isAlive();

return 0;
}
