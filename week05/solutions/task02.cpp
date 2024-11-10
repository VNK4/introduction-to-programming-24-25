#include <iostream>

int sumOfInterval(int a, int b) {
    int result = 0;
    for(int i = a; i <= b; ++i) {
        result += i;
    }
    return result;
}