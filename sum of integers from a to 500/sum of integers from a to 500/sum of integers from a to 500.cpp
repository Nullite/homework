#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");


	int a = 0;
	int b = 0;
	int sum = 0;

	cout << "Введите целое число, в диапазоне от -500 до 500 и программа \n"
		 << "посчитает сумму целых чисел в диапазоне от введенного числа до 500.\n";
	cin >> a;

	if (a < -500 || a > 500)
	{
		cout << "Число должно быть в дианазоне от -500 до 500.\n";
		return 0;
	}

	if (a < 0)
	{
		b = a;
		a = -a + 1;
		
	}
	else
	{
		b = a;
	}

	for (; a <= 500; a++)
	{
		sum += a;
	}
	
	cout << sum << " - сумма всех целых чисел от " << b << " до 500\n";
	
}

