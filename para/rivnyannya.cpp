#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;
	cin>> a >> b >> c;
	double d;
	double x1, x2;

	d = b*b - 4*a*c;

	if (a == 0)
	{
		if (b==0 && c !=0)
		{
			cout <<"no roots" << endl;
			return 0;
		}
		else
		{
			cout << "x Є R" << endl;
		}
	}

	if (d<0)
	{
		cout << "no roots" << endl;
		return 0;
	}
	else if (d==0)
	{
		x1 = (-b + sqrt(d)) / 2*a;
		cout << x1 << endl;
		return 0;
	}
	else
	{
		x1 = (-b + sqrt(d)) / 2*a;
		x2 = (-b + sqrt(d)) / 2*a;

		cout << x1 << "" << x2 <<endl;
	} 

	return 0;
}

