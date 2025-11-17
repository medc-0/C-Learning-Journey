#include <iostream>

int main() {
    
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age <= 17) {
        std::cout << "You are a minor." << std::endl;
    }
    else if (age >= 18 && age <= 64) {
        std::cout << "You are an Adult." << std::endl;
    }
    else {
        std::cout << "You are a senior." << std::endl;
    }

}