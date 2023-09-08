#include <iostream>
#include <cmath> // Include the cmath library for the absolute function

int main() {
    double num1, num2;
    std::string operation; // Changed char to std::string for the operation

    // Input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operation (+, -, *, /, abs): ";
    std::cin >> operation;

    if (operation != "abs") { // Use double quotes for the string
        std::cout << "Enter second number: ";
        std::cin >> num2;
    }

    // Perform calculations
    double result;
    if (operation == "+") {
        result = num1 + num2;
    } else if (operation == "-") {
        result = num1 - num2;
    } else if (operation == "*") {
        result = num1 * num2;
    } else if (operation == "/") {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 1; // Exit the program with an error code
        }
    } else if (operation == "abs") {
        result = std::abs(num1);
    } else {
        std::cout << "Invalid operation entered." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Output the result
    std::cout << "Result: " << result << std::endl;

    return 0; // Exit the program successfully
}

