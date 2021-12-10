#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    float hours = 0;
    float minutes = 0;
    float distance = 0;

    cout << "Чтобы рассчитать необходимую минимальную скорость,\n"
         << "введите оставшееся время (часы, минуты) и расстояние\n"
         << "до аэропорта ( в километрах)\n\n";
 
    cout << "Введите часы\n";
    cin >> hours;
    if (hours < 0) {
        cout << "Данное значение не может быть отрицательным.\n";
        return 0;
    }
    
    cout << "Введите минуты.\n";
    cin >> minutes;
    if (minutes < 0) {
        cout << "Данное значение не может быть отрицательным.\n";
        return 0;
    }

    cout << "Введите расстояние до аэропорта. \n";
    cin >> distance;
    if (distance <= 0) {
        cout << "Данное значение не может быть отрицательным или нулевым.\n";
        return 0;
    }

    hours += minutes / 60;

    const float speed = distance / hours;

    cout << "Чтобы добраться до аэропорта вовремя, Вам необходимо ехать со скоростью не менее " << speed << " км/ч. \n";
    return 0;

}