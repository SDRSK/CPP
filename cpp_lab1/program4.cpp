#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout<<"Напиши висоту; Ширину; довжину; " <<endl;
	cin>> a;
	cin>> b;
	cin>> c;
	cout<< "Об'єм: "<< a*b*c << endl;
	cout<< "Повна поверхня: "<< 2*(a*b+b*c+a*c)<<endl;
}

