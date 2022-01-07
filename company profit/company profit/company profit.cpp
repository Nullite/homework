#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int size = 12;
	string months[size]{ "январь", "февраль", "март", "апрель", "май", "июнь", "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь" };

	cout << "Введите прибыль фирмы за каждый месяц в прошедшем году.\n";

	double profit[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Введите прибыль за " << months[i] << endl;
		cin >> profit[i];
	}

	int min;
	int max;

	int getCorrectDiapasone = 0;

	while (!getCorrectDiapasone)
	{
		cout << "Введите номер месяца, с которого нужно рассчитать минимальную и максимальную прибыль фирмы.\n";
		cin >> min;
		if (min < 1 || min > 12)
		{
			cout << "Некорректно введен месяц.\n";
			continue;
		}

		cout << "Введите номер месяца, до которого нужно рассчитать минимальную и максимальную прибыль фирмы.\n";
		cin >> max;
		if (max < 1 || max > 12)
		{
			cout << "Некорректно введен месяц.\n";
			continue;
		}
		if (min > max)
		{
			cout << "Месяц начала рассчета не может быть больше месяца окончания рассчета.\n";
			continue;
		}
		getCorrectDiapasone = 1;
	}
	

	double minProfit = profit[min - 1];
	double maxProfit = profit[min - 1];

	string monthWithMinProfit = months[min - 1];
	string monthWithMaxProfit = months[min - 1];

	for (int i = min; i < max; i++)
	{
		if (profit[i] < minProfit)
		{
			minProfit = profit[i];
			monthWithMinProfit = months[i];
		}
		if (profit[i] > maxProfit)
		{
			maxProfit = profit[i];
			monthWithMaxProfit = months[i];
		}
	}

	cout << "Минимальная прибыль фирмы в текущем диапазаоне: " << minProfit << " (руб.) была получена за " << monthWithMinProfit << "." << endl
		<< "Максимальная прибыль фирмы в текущем диапазаоне: " << maxProfit << " (руб.) была получена за " << monthWithMaxProfit <<"." << endl;
}

