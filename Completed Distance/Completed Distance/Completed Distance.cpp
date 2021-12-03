#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    float v = 0;
    float t = 0;
    float a = 0;
    int i = 0;
    cout << "Введите начальную скорость\n";
    cin >> v ? i = 1 : i = 0;
    if (i == 0) {
        cout << "Некорректный ввод.\n";
        return 0;
    }

    cout << "Введите время\n";
    cin >> t ? i = 1 : i = 0;
    if (i == 0) {
        cout << "Некорректный ввод.\n";
        return 0;
    }

    cout << "Введите постоянное ускорение\n";
    cin >> a ? i = 1 : i = 0;
    if (i == 0) {
        cout << "Некорректный ввод.\n";
        return 0;
    }

    const float S = v * t + a * pow(t, 2) / 2;

    if (S < 0) {
        cout << "Движение в обратную сторону.\n"
            << "Пройденное расстояние равно " << S * (-1) << "\n";
        return 0;
    }

    cout << "Пройденное расстояние равно " << S << "\n";
    return 0;
};
