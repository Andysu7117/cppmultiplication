#include <iostream>

int addition(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    std::cout << "Enter an integer: ";
    int num1{ };
    std::cin >> num1;
    std::cout << "Enter another integer: ";
    int num2{ };
    std::cin >> num2;
    std::cout << num1 << " + " << num2 << " is " << addition(num1, num2) << ".\n";
    std::cout << num1 << " - " << num2 << " is " << subtract(num1, num2) << ".\n";
    return 0;
}
