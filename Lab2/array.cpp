//array.cpp by Alexandra  Nevell ECE 2310

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief 
 * 
 * @param arr - array int
 * @param size - number of elemennts in the array
 */
void printMemArr(const int arr[], int size){ // void printMem(const int * arr, int size)
        printf("Array - Each int is worth %lu bytes\n" , sizeof(arr[0])); // %lu is 
        for(int i = 0; i < size; i++){
            printf("Value: %i at Memory Location: %p\n", arr[i], arr + i);
        }
}
/** 
 * @brief increments all of the elments of the arrat by 10
 * 
 * @param arr - array of int
 * @param size - number of elemtns in the array 
 */

 void incArrBy10(int arr[], int size){
    for(int i =0; i < size; i++){
        arr[i] += 10;
    }
 }

 int main(){
    const int SIZE = 5;
    int arr[SIZE];
    for(int i =0; i < SIZE; i++){
        arr[i] = 100 +i;
    }
    printf("Before---------------------------\n");
    printMemArr(arr, SIZE);

    //change the value
    incArrBy10(arr, SIZE);
    printf("After---------------------------\n");
    printMemArr(arr,SIZE);
    
    return 0;
 }
