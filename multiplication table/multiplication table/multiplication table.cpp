#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int k = 0;

    cout << "Введите число от 1 до 9 и программа напишет Вам таблицу умножения на это число.\n";
    cin >> k;

    if (k < 1 || k > 9)
    {
        cout << "Число должно быть в диапазоне от 1 до 9.\n";
        return 0;
    }

    string table;

    for (int i = 1; i <= 9; i++)
    {
        table += to_string(k) + " X " + to_string(i) + " = " + to_string (k*i) + "\n";
    }

    cout << table;

}
