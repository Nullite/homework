#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int size = 20;
	int randArray[size];

	srand(time(0));

	cout << "Случайные элементы массива:\n";

	for (int i = 0; i < size; i++)
	{
		randArray[i] = rand() % 100;
		if (i == size - 1)
		{
			cout << randArray[i] << ".\n";
			continue;
		}
		cout << randArray[i] << ", ";
	}

	int min = randArray[0];
	int max = randArray[0];

	for (int i = 1; i < size; i++)
	{
		if (randArray[i] < min)
		{
			min = randArray[i];
		}
		if (randArray[i] > max)
		{
			max = randArray[i];
		}
	}

	cout << "Из них минимальное значение - " << min << ",\nмаксимальное - " << max << ".\n";

}

