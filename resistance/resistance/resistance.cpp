#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    float R1 = 0, R2 = 0, R3 = 0;
            cout << "Введите первое сопротивление\n";
            cin >> R1;
            cout << "Введите второе сопротивление\n";
            cin >> R2;
            cout << "Введите третье сопротивление\n";
            cin >> R3;
        
            if (R1 > 0 && R2 > 0 && R3 > 0) {
                const float R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
                cout << "Cопротивление R0 составляет " << R0 << " Ом.";
                return 0;
            }
            
                cout << "Некорректное значение сопротивления\n";
            
            return 0;
}


