#include <iostream>
#include <vector>

int main() {

    std::vector<int> points = {1, 2, 3, 4, 5};

    for (auto point : points) {
        std::cout << point << " ";
    }
    std::cout << std::endl;

    for (auto& point : points) {
        point += 10;
        std::cout << point << " ";
    }

    return 0;
}