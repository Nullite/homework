#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int processed = 1;

	while (processed)
	{
		int vasyaSalary = 0;
		int codelines = 0;
		int tardies = 0;
		int targetSelary = 0;
		int countSelary = 0;

		int option = 0;

		cout << "Вася, что ты хочешь посчитать?\n"
			<< "1 - сколько строк кода надо написать, чтобы получить желаемую зарплату.\n"
			<< "2 - сколько раз можно опоздать на работу.\n"
			<< "3 - посчитать свою зарплату.\n";
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Вася, введи желаемую зарплату.\n";
			cin >> vasyaSalary;

			cout << "Сколько раз ты хочешь опоздать на работу?\n";
			cin >> tardies;

			targetSelary = vasyaSalary;
			if (!targetSelary)
			{
				cout << "Вась, можешь вообще на работу не ходить так то.\n";
				vasyaSalary = targetSelary;
				break;
			}
			else if (targetSelary < 0)
			{
				cout << "Вась, а зачем тебе такая работа?\n";
				vasyaSalary = targetSelary;
				break;
			}
			countSelary -= tardies / 3 * 20;
			
				while (countSelary < targetSelary)
				{
					codelines += 100;
					countSelary += 50;
				}
			
			cout << "Вася, тебе нужно написать " << codelines << " строчек кода, чтобы получить $" << countSelary << "\n";
			break;

		case 2:
			cout << "Вася, введи колличество строк кода, которое ты планируешь написать.\n";
			cin >> codelines;

			cout << "Какую зарплату ты хочешь получить?\n";
			cin >> vasyaSalary;

			tardies = ((codelines / 100 * 100 * 0.5) - vasyaSalary) / 20;

			if (tardies < 0)
			{
				cout << "Вась, ты даже без опозданий столько не получишь.\n";
			}
			else
			{
				cout << "Ты можешь опоздать " << tardies << " раз. Но лучше не опаздывай - больше получишь.\n";
			}
			break;

		case 3:
			cout << "Сколько строк кода ты написал?\n";
			cin >> codelines;

			cout << "Сколько раз ты опоздал?\n";
			cin >> tardies;

			vasyaSalary = (codelines / 100 * 100 * 0.5) - tardies / 3 * 20;

			if (vasyaSalary <= 0)
			{
				cout << "Василий, в этом месяце без зарплатки.\n";
			}
			else
			{
				cout << "Твоя зарплта в этом месяце - $" << vasyaSalary << "\n";
			}
			break;
		}

		cout << "Василий, хочешь еще посчитать?\n"
			<< "1 - да, конечно.\n"
			<< "0 - хватит на сегодня рассчетов, пора идти писать код.\n";
		cin >> processed;

	}




}
