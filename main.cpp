#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> fruits = {"apple", "banana", "cherry", "strawberry", "blueberry"};

    for (auto fruit : fruits) {
        std::cout << fruit << std::endl;
    }
    std::cout << std::endl;
    
    for (auto& fruit : fruits) {
        fruit += " pie";
        std::cout << fruit << " " << std::endl;
    }
 
    return 0;
}