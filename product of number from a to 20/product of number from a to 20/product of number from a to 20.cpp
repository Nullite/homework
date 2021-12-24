#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a = 0;
    double product = 1;

    cout << "Введите число от 1 до 20 и программа вернет произведение всех чисел от введенного числа до 20.\n";
    cin >> a;

    if (a < 1 || a > 20)
    {
        cout << "Число должно быть в диапазоне от 1 до 20.\n";
        return 0;
    }

    for (; a <= 20; a++)
    {
        product *= a;
    }

    string productStr = to_string(product);


    cout <<productStr.substr(0, productStr.length() - 7) << endl;
    
}

