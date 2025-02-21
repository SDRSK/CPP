#include <iostream>
#include <vector>
#include <cmath>

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    std::vector<int> palindromes;
    
    for (int i = 1; i < 100; ++i) {
        if (isPalindrome(i)) {
            int square = i * i;
            if (isPalindrome(square)) {
                palindromes.push_back(i);
            }
        }
    }
    
    std::cout << "Паліндроми першої сотні, квадрати яких теж паліндроми: ";
    for (size_t i = 0; i < palindromes.size(); ++i) {
        std::cout << palindromes[i];
        if (i != palindromes.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    
    return 0;
}
