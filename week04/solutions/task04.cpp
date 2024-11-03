#include <iostream>

int main() {
    int num;
    std::cin >> num;

    int result = 0;
    
    while (num != 0)
    {
        result = result * 10 + num % 10;
        num /= 10;
    }
    
    std::cout << result << std::endl; 
}