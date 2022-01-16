#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    
    int checkInputDirection = 0;
    int checkInputDelay = 0;
    int direction = 0;
    int delay = 100;
    int lineLength = 20;
    int countSymbols = 0;
    
    string printSymbol;
    string directionStr;
    string delayStr;
    string symbol;

    cout << "Выбирите символ для строки.\n";
    cin >> printSymbol;

    
    
    while (!checkInputDirection)
    {
        cout << "Выбирите направление отрисовки:\n"
            << "1 - горизонтально.\n"
            << "2 - вертикально.\n";
        cin >> direction;

        switch (direction)
        {
        case 1:
            directionStr = "горизонтальное";
            symbol = printSymbol;
            checkInputDirection = 1;
            break;
        case 2:
            printSymbol += "\n";
            directionStr = "вертикальное";
            symbol = printSymbol.substr(0, printSymbol.length() - 1);
            checkInputDirection = 1;
            break;
        default:
            cout << "Введено неверное значение, повторите ввод.\n";
        }
    }
    
    while (!checkInputDelay)
    {
        cout << "Выбирите скорость отрисовки:\n"
            << "1 - медленно.\n"
            << "2 - средне.\n"
            << "3 - быстро.\n";

        cin >> delay;

        switch (delay)
        {
        case 1:
            delay = 800;
            delayStr = "медленной";
            checkInputDelay = 1;
            break;
        case 2:
            delay = 400;
            delayStr = "средней";
            checkInputDelay = 1;
            break;
        case 3:
            checkInputDelay = 1;
            delayStr = "быстрой";
        default:
            cout << "Введено неверное значение, повторите ввод.\n";
        }
    }
       
    cout << "Вы выбрали " << directionStr << " направление выведения линии из символов " << symbol << "\n"
         << "c " << delayStr << " скоростью.\n";


    while (countSymbols < lineLength)
    {
        if (countSymbols == lineLength - 1 && direction == 1)
        {
            cout << printSymbol << "\n";
            break;
        }
        cout << printSymbol;
            Sleep(delay);
            countSymbols++;
    }

    cout << "Программа завершена.\n";
}
