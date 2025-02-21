#include  <iostream>
using namespace std;

int main() 
{
	double num1, num2;
	char op;

		cout << "Введіть перше число: ";
		cin >> num1;

		cout << "Введіть дію(Оператори: +, -, *, /): ";
		cin >> op;
		cout << " " << op << endl;
		cout << " " << op << endl;
		cout << " " << op << endl;
		if (op > 260){
			cout << "чілаут" << endl;
		return 0;
		
		}

		cout << "Введіть друге число: ";
		cin >> num2;
		cout << num2 << endl;

	switch (op)
	{

		case '+': cout << "Результат: " << num1 + num2 << endl; break;
        	case '-': cout << "Результат: " << num1 - num2 << endl; break;
        	case '*': cout << "Результат: " << num1 * num2 << endl; break;
		case '/':{  
				if (num2 != 0)
                        		cout << "Результат: " << num1 / num2 << endl;
			 	else
					cout << "На нуль не ділиться! " << endl;
			 	break;
			}
        	default: cout << "Не правильний оператор! " << endl;

	}

return 0;

}

