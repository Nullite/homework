#include <iostream>
#include <string>

using namespace std;

string CostTable(float dist, float cost92, float cost95, float cost98, float consump92, float consump95, float consump98) 
{
    const int costTrip92 = round(dist / consump92 * cost92);
    const int costTrip95 = round(dist / consump95 * cost95);
    const int costTrip98 = round(dist / consump98 * cost98);

    string upBoarder = "_________________________________________\n";
    string head = "| Марка бензина | Стоимость поездки\t|\n";
    string CostTable92 = "|     АИ92\t|\t" + to_string(costTrip92) + " руб.\t|" + "\n";
    string CostTable95 = "|     АИ95\t|\t" + to_string(costTrip95) + " руб.\t|" + "\n";
    string CostTable98 = "|     АИ98\t|\t" + to_string(costTrip98) + " руб.\t|" + "\n";
    string downBorder = "-----------------------------------------\n";

    string commonCostTable = upBoarder + head + CostTable92 + CostTable95 + CostTable98 + downBorder;

    return commonCostTable;
}

int main()
{
    setlocale(LC_ALL, "rus");
   
    float distance = 0;
    float cost92 = 0;
    float cost95 = 0;
    float cost98 = 0;
    float cons92 = 0;
    float cons95 = 0;
    float cons98 = 0;

    cout << "Для рассчета стоимости поездки необходимо ввести дистанцию (в км),\n"
         << "стоимость бензина марок АИ-92, АИ-95, АИ-98, а так же расход топлива\n"
         << "автомобиля для каждой марки топлива.\n\n";

    cout << "Введите длинну маршрута (км)\n";
    cin >> distance ? distance = distance : distance = -1;
    if (distance < 0) {
        cout << "Введены некорректные параметры\n"
             << "перезапустите программу.\n";
        return 0;
    }
    if (distance == 0) {
        cout << "Стоимость поездки для всех видов топлива будет равна нулю.\n"
            << "Чтобы задать другие параметры, перезапустите программу.\n";
        return 0;
    }

    cout << "Введите стоимость бензина марки АИ-92\n";
    cin >> cost92;
    if (cost92 <= 0) {
        cout << "Введены некорректные данные, перезапустите программу\n";
        return 0;
    }

    cout << "Введите стоимость бензина марки АИ-95\n";
    cin >> cost95;
    if (cost95 <= 0) {
        cout << "Введены некорректные данные, перезапустите программу\n";
        return 0;
    }

    cout << "Введите стоимость бензина марки АИ-98\n";
    cin >> cost98;
    if (cost98 <= 0) {
        cout << "Введены некорректные данные, перезапустите программу\n";
        return 0;
    }

    cout << "Введите расход вашего автомобиля для марки АИ-92 (л/100 км)\n";
    cin >> cons92;
    if (cons92 <= 0) {
        cout << "Введены некорректные данные, перезапустите программу\n";
        return 0;
    }

    cout << "Введите расход вашего автомобиля для марки АИ-95 (л/100 км)\n";
    cin >> cons95;
    if (cons95 <= 0) {
        cout << "Введены некорректные данные, перезапустите программу\n";
        return 0;
    }

    cout << "Введите расход вашего автомобиля для марки АИ-98 (л/100 км)\n";
    cin >> cons98;
    if (cons92 <= 0) {
        cout << "Введены некорректные данные, перезапустите программу\n";
        return 0;
    }


    cout << CostTable(distance, cost92, cost95, cost98, cons92, cons95, cons98) << endl;
}
