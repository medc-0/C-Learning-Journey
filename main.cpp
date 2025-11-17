#include <iostream>

int main() {

    int gradeP;

    std::cout << "Enter your score: ";
    std::cin >> gradeP;

    if (gradeP >= 90 && gradeP <= 100) {
        std::cout << "Your grade is an A!" << '\n';
    }
    else if (gradeP >= 80 && gradeP <= 89) {
        std::cout << "Your grade is a B!" << '\n';
    }
    else if (gradeP >= 70 && gradeP <= 79) {
        std::cout << "Your grade is a C.." << '\n';
    }
    else if (gradeP >= 60 && gradeP <= 69) {
        std::cout << "Your grade is a D..." << '\n';
    }
    else if (gradeP >= 0 && gradeP <= 59) {
        std::cout << "Your grade is an F...\nBetter luck next time." << '\n';
    }
    else {
        std::cout << "Invalid grade points entered." << '\n';
    }

    return 0;
}
