#include <iostream>
#include <cstdlib>
#include <ctime>

int rand(int low, int high) {
    return low + std::rand() % (high - low + 1);
}

int main() {
    std::srand(std::time(nullptr));

    int low, high;
    std::cout << "Введіть мінімальне значення: ";
    std::cin >> low;
    std::cout << "Введіть максимальне значення: ";
    std::cin >> high;

    if (low > high) {
        std::swap(low, high);
    }

    std::cout << "Випадкове число в діапазоні [" << low << ", " << high << "]: " 
              << rand(low, high) << std::endl;

    return 0;
}
