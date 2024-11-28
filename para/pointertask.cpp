#include <iostream>

int main()
{
	int a;
	a = 1;
	std::cout << "a= " << a << std::endl;
	int b = a;
	b = 2;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "&a = " << &a << std::endl;
	std::cout << "&b = " << &b << std::endl;
	int* c;
	c=&a;
	std::cout << "c = " << c << std::endl;
	int** d;
        d = &c;
	long* e = (long*)(a);
	std::cout << "*c = " << *c << std::endl;
        std::cout << "*b = " << *d << std::endl;
        std::cout << "*c = /t" << c << std::endl;
        std::cout << "c + 1 =/t " << c + 1 << std::endl;
	
}
