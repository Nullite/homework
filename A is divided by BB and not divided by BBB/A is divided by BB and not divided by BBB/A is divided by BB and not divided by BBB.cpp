#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int getNum = 0;
	int checkNum = 1;

	cout << "Введите целое число от -999999999 до 999999999 и программа выведет все числа, на квадраты\n"
		<< "которых число делится без остатка и не делится без остатка на их кубы.\n";
	cin >> getNum;

	if (getNum < -999999999 || getNum > 999999999)
	{
		cout << "Введите число в заданном диапазоне. \n";
		return 0;
	}

	string collectNumbers;


	
	if (getNum < 0)
	{
		getNum = -getNum;
	}
	{
		while (checkNum <= sqrt(getNum))
		{
			if (!(getNum % (int)pow(checkNum, 2)) && getNum % (int)pow(checkNum, 3))
			{
				collectNumbers += to_string(checkNum) + ", ";
				collectNumbers += to_string(-checkNum) + ", ";
			}
			checkNum++;
		}
	}

	if (collectNumbers.length() == 0)
	{
		cout << "Таких чисел  нет.\n";
		return 0;
	}
		cout << collectNumbers.substr(0, collectNumbers.length() - 2) << "." << endl;

	
}

