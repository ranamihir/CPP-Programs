#include <iostream>

using namespace std;

//This maintains order of array
void deleteElement(int *a, int &size, int pos) {
    /*1. pos is actual position of element to be deleted
     *    considering index starting from 0
     *2. size is passed by ref to actually change size of array in whole program
     */
    for(int i = pos; i < (size-1); i++) {
        a[i] = a[i+1];
    }
    size--;
}
