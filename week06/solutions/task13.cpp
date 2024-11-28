#include <iostream>

const int MAX_SIZE = 100;

bool isPrime(int n) {
    for (int i = 2; i < n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void movePrimesToStart(int arr[MAX_SIZE], int size) {
    int currPrimeIndex = 0;
    for (size_t i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            if (i != currPrimeIndex) {
                int prime = arr[i];
                for (size_t j = i; j > currPrimeIndex; --j) {
                    arr[j] = arr[j - 1];
                }
                arr[currPrimeIndex] = prime;
            }
            ++currPrimeIndex;
        }
    }
}

int main() {
    int arr[] = {6, 8, 3, 9, 7, 11};
    movePrimesToStart(arr, 6);
    for (size_t i = 0; i < 6; ++i) {
        std::cout << arr[i] << ' ';
    }
}