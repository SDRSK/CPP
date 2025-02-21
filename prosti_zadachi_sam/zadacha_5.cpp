#include <iostream>

int main(){
    int r;
    float p = 3.14;
    std::cout << "Radius: ";
    std::cin >> r;
	std::cout << "Circult: " << r*p*2 << std::endl;
	std::cout << "Area: " << p*r*r << std::endl;

}