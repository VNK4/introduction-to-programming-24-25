#include <iostream>

bool isPalindrome(int arr[], int length) {
    for (int i = 0; i < length / 2; i++) {
        if (arr[i] != arr[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = { 1, 2, 3, 2, 1 };
    std::cout << isPalindrome(arr, 5) << std::endl;
    
    int secondArr[] = { 1, 2, 3, 4, 5 };
    std::cout << isPalindrome(secondArr, 5);
}