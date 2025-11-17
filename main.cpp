#include <iostream>

int main() {

    double num1, num2;
    std::string name;

    std::cout << "Enter your first number: " << '\n';
    std::cin >> num1;

    std::cout << "Enter your second number: " << '\n';
    std::cin >> num2;

    std::cout << "Your sum is: " << num1 + num2 << '\n';
    std::cout << "Your difference is: " << num1 - num2 << '\n';
    std::cout << "Your result is: " << num1 * num2 << '\n';
    std::cout << "Your quotient is: " << num1 / num2 << '\n';

    std::cout << "Enter your name: " << '\n';
    std::cin >> name;

    std::cout << name << ", you just did math like a champ!" << '\n';

    return 0;
}