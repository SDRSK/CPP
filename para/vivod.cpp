#include <iostream>
int main (){
	int a, b, c;
	std::cin >> a;
	std::cin >> b;
	c = a;
	a = b;
	b = c;
	std::cout << a;
	std::cout << b;

	return 0;
}
