#include <iostream>

int* mergeSortedArrays(int arr1[], int len1, int arr2[], int len2, int& resultLength) {
    int* merged = new int[len1 + len2];
    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        }
        else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < len1) {
        merged[k++] = arr1[i++];
    }
    while (j < len2) {
        merged[k++] = arr2[j++];
    }

    resultLength = k;
    return merged;
}

int* mergeUniqueSortedArrays(int arr1[], int len1, int arr2[], int len2, int& resultLength) {
    int* temp = mergeSortedArrays(arr1, len1, arr2, len2, resultLength);
    int* unique = new int[resultLength];
    int uniqueLength = 0;

    for (int i = 0; i < resultLength; i++) {
        if (i == 0 || temp[i] != temp[i - 1]) {
            unique[uniqueLength++] = temp[i];
        }
    }

    delete[] temp;
    resultLength = uniqueLength;
    return unique;
}

int main()
{
    int firstArr[] = { 1, 2, 3, 4, 5 };
    int secondArr[] = { 1, 2, 4, 7, 8 };

    int resultLength = 0;
    int* result = mergeUniqueSortedArrays(firstArr, 5, secondArr, 5, resultLength);

    for (int i = 0; i < resultLength; i++) {
        std::cout << result[i] << " ";
    }

    delete[] result;
}