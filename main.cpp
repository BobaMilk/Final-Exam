#include <string>
#include <ctype.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

//Write a function that accepts an int array and the array's size as arguments.  The function should create a new array that is one element larger than the argument array.
//The first element of the new array should be set to 0.  Element 0 of the arguments array should be copied to element 1 of the new array, element 1 of the argument array
//should be copied to element 2 of the new array, and so forth.  The function should return a pointer to the new array.
//Be sure to write a function to demonstrate that your function works.  After returning from the function, please print the output of the array from main().

using namespace std;

int* newArray(int*& array,int size) {
    int j=1;
    int *p = new int[size+1];
    p[0] = 0;

    for(int i=0;i<size;i++) {
        p[j] = array[i];
        j++;
    }
    return p;
}

int main() {
    int array[5] = {0,1,2,3,4};
    int* pointer = array;
    int* updated = newArray(pointer,5);

    for(int i=0;i<6;i++) {
        cout <<  updated[i] << ",";
    }


   return 0;
}
