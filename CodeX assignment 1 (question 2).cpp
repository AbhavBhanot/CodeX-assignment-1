#include <iostream>

int main() {
    double num1, num2, num3;

    // Input three numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    // Check the greatest number using logical operators
    if (num1 >= num2 && num1 >= num3) {
        std::cout << "The greatest number is: " << num1 << std::endl;
    } else if (num2 >= num1 && num2 >= num3) {
        std::cout << "The greatest number is: " << num2 << std::endl;
    } else {
        std::cout << "The greatest number is: " << num3 << std::endl;
    }

    return 0;
}