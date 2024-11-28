#include <iostream>

void saveSumInLesser(int* a, int* b) {
    if(*a < *b) {
        *a += *b;
    } else if (*b < *a){
        *b += *a;
    } else {
        *a += *b;
        *b = *a;
    }
}