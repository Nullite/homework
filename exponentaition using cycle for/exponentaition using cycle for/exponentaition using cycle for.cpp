#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a = 0;
    int b = 0;
    

    cout << "Программа возведет в степень от 0 до 50 число от -1000000 до 1000000.\n"
         << "Введите основание.\n";
    cin >> a;
    if (a < -1000000 || a > 1000000)
    {
        cout << "Основание может быть в пределах от -1000000 до 1000000\n";
        return 0;
    }

    cout << "Введите показатель.\n";
    cin >> b;
    if (b < 0 || b > 50)
    {
        cout << "Показатель может быть в пределах от 0 до 50\n";
        return 0;
    }
    if (!b) {
        cout << 1 << endl;
        return 0;
    }

    double result = a;

    for (int i = 1; i < b; i++)
    {
        result *= a;
    }

    string resultStr = to_string(result);

    cout << resultStr.substr(0, resultStr.length() - 7) << endl;


}
