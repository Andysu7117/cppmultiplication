#include <iostream>

void scanNumbers(int *a, int *b) {
    std::cout << "Enter an integer: ";
    std::cin >> *a;

    std::cout << "Enter another integer: ";
    std::cin >> *b;
}

int addition(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1{ };
    int num2{ };
    scanNumbers(&num1, &num2);

    std::cout << num1 << " + " << num2 << " is " << addition(num1, num2) << ".\n";
    std::cout << num1 << " - " << num2 << " is " << subtract(num1, num2) << ".\n";
    return 0;
}
