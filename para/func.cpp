#include <iostream>

void swap(int& , int& );
unsigned long int factorial(int);

int main()
{
        int a = 2, b = 3;
	int* pa = &a;
	int& r = a;

        swap(a, b);

        std::cout << "a = " << a << " b = " << b << std::endl;
	
	int n;
	std::cin >> n;
	std::cout << factorial(n) << std::endl;

}

/*
unsigned long int factorial_old (int n)	
{
	//1*2*3*....*(n-1)*n;
	unsigned long int result = 1;
	for(int i = 1; i <= n; ++i)
	{
		result *= i;
	}
	return result;	
}
*/

unsigned long int factorial(int n)
{
	if(n==1) return 1;
	return n * factorial(n - 1);
}

void swap(int& a, int& b)
{
	int c = b;
	b = a;
	a = c;
}
