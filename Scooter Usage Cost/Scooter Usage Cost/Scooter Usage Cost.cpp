#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Чтобы рассчитать стоимость времени использование скутера, введите\n"
		 << "начальное время использования (часы, минуты, секунды)\n"
		 << "и конечное время (часы, минуты, секунды).\n";

	float startHours;
	float startMinutes;
	float startSeconds;

	float finishHours;
	float finishMinutes;
	float finishSeconds;

	cout << "Введите время начала пользования.\n";

	cout << "Введите часы.\n";
	cin >> startHours;

	cout << "Введите минуты.\n";
	cin >> startMinutes;

	cout << "Введите секунды.\n";
	cin >> startSeconds;


	cout << "Введите время завершения пользования.\n";

	cout << "Введите часы.\n";
	cin >> finishHours;

	cout << "Введите минуты.\n";
	cin >> finishMinutes;

	cout << "Введите секунды.\n";
	cin >> finishSeconds;

	startMinutes += startHours * 60 + startSeconds / 60;
	finishMinutes += finishHours * 60 + finishSeconds / 60;

	const int cost = (finishMinutes - startMinutes) * 2;
	if (cost < 0) {
		cout << "Конечное время не может быть меньше начального.\n";
		return 0;
	}
	cout << "Стоимость поездки составляет " << cost << " грн.\n";

}
