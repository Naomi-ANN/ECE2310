#include <iostream>
#include <vector>
using namespace std;

//////// function one goal is >>>>>>>
/**
*@brief prints the elements in the vector and their memory locations 
*@param v - vectors of intergers 
*/

///////////////////////////////////
void printMemVec(vector<int> v){ ///here we want a vector with a var(v) who is an intenger
printf("Vector - Each int is worth %lu bytes\n" , v.size()); // %lu is print or read unsigned long integers

        for(int i = 0; i < v.size(); i++){  /// I need to define size

        printf("Value: %i at Memory Location: %p\n",v[i] ,&v+i); // &v prints the address 
        }
}


//////////// ////////////////////////////////////////function two goal is>>>>>>>>>>
/**
 * @brief increments all the elments in v by 10
 * 
 * @param v - address to a vector of intengers
 */
///////////////////////////
 void incVecBy10(vector<int> &v){ //////////I do belive sizde still needs to be defined here tho //& bc we dont want a copy of the value we want to update it
    for(int i = 0; i < v.size(); i++){ 
        v[i] += 10;
    }
 }


 ///////////////////////////////////////////////////////////////////////////////////////////////
int main(){
const int SIZE = 5; ///////this holds the size of the array we would like I belive tis stays the same 

vector<int> v(SIZE);

for(int i = 0; i < SIZE; i++){
     v[i] = 100 +i;
    }

printf("Before---------------------------\n");///////we start counting at 100 here and stop at 104
printMemVec(v); /// dont need size bc we are already getting the size from the v.size
incVecBy10(v);

 printf("After---------------------------\n");/////instead of statting at 100 we start at 110 and increase by one until 114
printMemVec(v); 

 v.pop_back(); ////////deletes last elemnts?????
 printf("After POP ----------------------------\n");
printMemVec(v); 

 v.push_back(101);     /////v.push_back(i) meanins that i will be added as a new elemnts to the vector v basically we are telling it to make space 
 v.push_back(102);
 printf("After Push----------------------------\n");
printMemVec(v); 
  return 0;
 }




