#include <iostream>
#include <string>
using namespace std;

string cube(int number)
{
	string numStr = to_string(number);

	if (numStr[0] == '-')
	{
		int digitsSum =  - ((int)numStr[1] - '0');
		for (int i = 2; i < numStr.length(); i++)
		{
			digitsSum += (int)numStr[i] - '0';
			
		}

		if (pow(digitsSum, 3) == pow(number, 2))
		{
			return "Куб суммы цифр этого числа равен квадрату числа.\n";
		}
		return "Куб суммы цифр этого числа не равен квадрату числа.\n";
	}
	int digitsSum = (int)numStr[0] - '0';

	for (int i = 1; i < numStr.length(); i++)
	{
		digitsSum += (int) numStr[i] - '0';

	}
	if (pow(digitsSum, 3) == pow(number, 2))
	{
		return "Куб суммы цифр этого числа равен квадрату числа.\n";
	}
	return "Куб суммы цифр этого числа не равен квадрату числа.\n";
	
}

int main()
{
	setlocale(LC_ALL, "rus");

	int num = 0;

	cout << "Введите целое число и программа посчитает,\n"
		 << "является ли куб суммы цифр в числе\n"
		 << "квадратом этого числа.\n";
	cin >> num;


	if (num < -99 || num > 99)
	{
		cout << "Куб суммы цифр в трех- и более значном числе всегда меньше квадрата этого числа. \n";
		return 0;
	}


	cout <<cube(num)<< endl;

}

