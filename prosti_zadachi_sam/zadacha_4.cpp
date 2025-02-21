#include <iostream>

int main(){
    int a, b, c;
    std::cout << "Height: ";
    std::cin >> a;
    std::cout << "Width: ";
    std::cin >> b;
    std::cout << "Length: ";
    std::cin >> c;
    std::cout << "Volume: " << a*b*c << std::endl;
    std::cout << "Full surface: " << 2*(a*b+b*c+a*c) << std::endl;
    
    }