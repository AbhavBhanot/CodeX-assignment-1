#include <iostream>
#include <string>

int main() 
{
    std::string fullname, collegeName;
    int age;

    std::cout << "Enter your full name: ";
    std::cin.ignore();  // Ignore any leftover newline characters from previous input
    std::getline(std::cin, fullname); 

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cin.ignore();  // No need for this line since age input consumes the newline character

    std::cout << "Enter your college name: ";
    std::getline(std::cin, collegeName);

    std::cout << "Hello " << fullname << ", I see you are " << age << " years old and are currently studying at " << collegeName << std::endl;

    return 0;
}


