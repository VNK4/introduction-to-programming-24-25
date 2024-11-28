#include <iostream>

// 10

void digitCount(long num, int digitCounter[10]) {
    while (num != 0) {
        ++digitCounter[num % 10];
        num %= 10;
    }
}

// 10.5

bool containsAllDigits(long num) {
    int digitCounter[10] = {0};
    digitCount(num, digitCounter);
    for (size_t i = 0; i < 10; ++i) {
        if (digitCounter[i] == 0) {
            return false;
        }
    }
    return true;
}

int mostFrequentDigit(long num) {
    int digitCounter[10] = {0};
    digitCount(num, digitCounter);
    int maxCount = 0;
    int result = -1;
    for (size_t i = 0; i < 10; ++i) {
        if(digitCounter[i] > maxCount) {
            maxCount = digitCounter[i];
            result = i;
        }
    }
    return result;
}