#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int size = 20;
	int randArray[size];

	

	int minDiapasone;
	int maxDiapasone;

	int getCorrectDiapasone = 0;

	while (!getCorrectDiapasone)
	{
		cout << "Введите минимальное число диапазона (от -100 до 99) для заполнения массива случайными числами.\n";
		cin >> minDiapasone;

		if (minDiapasone < -100 || minDiapasone > 99)
		{
			cout << "Минимальное число диапазона должно находиться в пределах от -100 до 99.\n";
			continue;
		}
		cout << "Введите максимальное число диапазона (от -99 до 100) для заполнения массива случайными числами.\n";
		cin >> maxDiapasone;

		if (maxDiapasone < -99 || maxDiapasone > 100)
		{
			cout << "Максимальное число диапазона должно находиться в пределах от -99 до 100.\n";
			continue;
		}
		else
		{
			getCorrectDiapasone = 1;
		}
		
	}

	srand(time(0));
	cout << "Случайные числа массива в выбранном диапазоне:\n";

	for (int i = 0; i < size; i++)
	{
		randArray[i] = rand() % (maxDiapasone - minDiapasone + 1) + minDiapasone;
		if (i == size - 1)
		{
			cout << randArray[i] << ".\n";
			continue;
		}
		cout << randArray[i] << ", ";
	}

	int getNum;
	int sum = 0;

	cout << "Введите число и программа рассчитает сумму всех чисел массива, которые меньше указанного.\n";
	cin >> getNum;

	for (int i = 0; i < size; i++)
	{
		if (randArray[i] < getNum)
		{
			sum += randArray[i];
		}
	}
	cout << "Сумма всех чисел массива, меньших, чем " << getNum << ": " << sum << endl;

}

