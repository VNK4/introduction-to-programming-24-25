#include <iostream>

void rotateArrayRight(int arr[], int length, int k) {
    k = k % length; // Avoiding unnecessary rotations
    if (k == 0) return;

    int* temp = new int[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[length - k + i];
    }
    for (int i = length - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    delete[] temp;
}

int main()
{
    int arr5[] = { 'a', 'b', 'c' };
    rotateArrayRight(arr5, 3, 1);
    for (int i = 0; i < 3; i++) {
        std::cout << (char)arr5[i] << " ";
    }
    std::cout << std::endl;
}