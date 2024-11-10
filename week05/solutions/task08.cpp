#include <iostream>
#include <cmath>

int pointDist(int a1, int a2, int b1, int b2) {
    return sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
}