#include <iostream>

void printArrayWithIndices(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		std::cout << "(" << arr[i] << ", " << i << ")";
		if (i < length - 1) std::cout << ", ";
	}
	std::cout << std::endl;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	printArrayWithIndices(arr, 5);
}