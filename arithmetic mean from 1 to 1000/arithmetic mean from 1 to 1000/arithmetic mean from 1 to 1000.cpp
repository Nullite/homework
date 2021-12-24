#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");


	int sum = 0;

	for (int i = 1; i <= 1000; i++)
	{
		sum += i;
	}

	sum /= 1000;

	cout << sum << endl;

}

