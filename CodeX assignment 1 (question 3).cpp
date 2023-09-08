#include <iostream>
#include <limits>

int main() {
    std::cout << "Range of char: " 
              << static_cast<int>(std::numeric_limits<char>::min()) << " to " 
              << static_cast<int>(std::numeric_limits<char>::max()) << std::endl;

    std::cout << "Range of short int: " 
              << std::numeric_limits<short int>::min() << " to " 
              << std::numeric_limits<short int>::max() << std::endl;

    std::cout << "Range of long int: " 
              << std::numeric_limits<long int>::min() << " to " 
              << std::numeric_limits<long int>::max() << std::endl;

    std::cout << "Range of double: " 
              << std::numeric_limits<double>::min() << " to " 
              << std::numeric_limits<double>::max() << std::endl;

    return 0;
}
