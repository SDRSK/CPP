#include <iostream>

int main() {
	int a;
	int b;

	std::cin >> a >> b;

	/*
	for(int j = 1; j < a; j = j+1)
	{
		for(int i=1; i<b; i = d+1){
		std::cout<<"*";

		}
	}
	*/
	
	for(int count = 0; count < a*b; count = count + 1)

		std::cout << std::setw(2) << count; 




	return 0;
}
