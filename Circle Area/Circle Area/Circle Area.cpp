#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    const float pi = 3.14159;
    float L = 0;
    int i;
    cout << "Введите длинну окружности.\n";
    cin >> L;
    if (L <= 0) {
        cout << "Неверно введена длина.\n ";
        return 0;
    };

    const float R = L / (2 * pi);
    const float S = pi * pow(R, 2);

    cout << "Площадь окружности равна " << S << "\n";

    return 0;

};
