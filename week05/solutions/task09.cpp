#include <iostream>
#include <cmath>

int pointDist(int a1, int a2, int b1, int b2) {
    return sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
}

int trianglePerimeter(int a1, int a2, int b1, int b2, int c1, int c2) {
    return pointDist(a1, a2, b1, b2) + pointDist(b1, b2, c1, c2) + pointDist(c1, c2, a1, a2);
}