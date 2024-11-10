#include <iostream>

int digitCount(int n) {
    int result = 0;
    do {
        n /= 10;
        ++result;
    } while (n != 0);
    return result;
}
int sumFirstLastDigit(int n) {
    int result = 0;
    if(n < 10) {
        return n * 2;
    }
    result += n % 10;
    while(n > 9) {
        n /= 10;
    }
    return result + n % 10;
}
int digitProduct(int n) {
    int result = 1;
    while (n != 0) {
        result *= n % 10;
        n /= 10;
    }
}
int reverseNumber(int n) {
    int result = 0;

    while (n != 0) {
        result = result * 10 + n % 10;
        n /= 10;
    }

    return result;
}
bool isPalindrome(int n) {
    return n == reverseNumber(n);
}
int isPowerOfTwo(int n) {
    int res = 0;
    while (n != 1) {
        if (n % 2 != 0) {
            return -1;
        }
        n /= 2;
        ++res;
    }
    return res;
}

void numProperties(int n) {
    std::cout << "Digit count: " << digitCount(n) << std::endl;
    std::cout << "Sum of first and last digit: " << sumFirstLastDigit(n) << std::endl;
    std::cout << "Product of digits: " << digitProduct(n) << std::endl;
    std::cout << "Reversed: " << reverseNumber(n) << std::endl;
    if (isPalindrome(n)) {
        std::cout << "Is a palindrome" << std::endl;
    } else {
        std::cout << "Isn't a palindrome" << std::endl;
    }
    int power = isPowerOfTwo(n);
    if (power == -1) {
        std::cout << "Isn't a power of two" << std::endl;
    } else {
        std::cout << "Is a power of two: " << power << std::endl;
    }
}