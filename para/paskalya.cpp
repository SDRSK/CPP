#include <iostream>
int main(){
	int a[5]={2, 4, 6, 7, 9}, b = 2;
		for (int i=0; i<5; i=i+1)
		{
			std::cout << a[i];
		
		}
		std::cout << std::endl;
		int* p; 
		p = &b;
		std::cout << p;
	return 0;
}
