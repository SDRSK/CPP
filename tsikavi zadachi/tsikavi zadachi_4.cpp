#include <iostream>
#include <vector>

void primeFactorization(int n) {
    std::vector<int> factors;
    
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    

    if (n > 2) {
        factors.push_back(n);
    }
    
    std::cout << "Розклад: ";
    for (size_t i = 0; i < factors.size(); ++i) {
        std::cout << factors[i];
        if (i != factors.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int num;
    std::cout << "Введіть число: ";
    std::cin >> num;
    primeFactorization(num);
    return 0;
}
