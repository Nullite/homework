#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    double mts = 1;
    double beeline = 1.5;
    double megafone = 2;

    int collingFrom = 0;
    int collingIn = 0;

    double callLength;

    int programmContinue = 1;

    while (programmContinue == 1)
    {
        cout << "Введите оператора с которого осуществляется звонок:\n"
            << "1 - МТС\n"
            << "2 - Билайн\n"
            << "3 - Мегафон\n";
        cin >> collingFrom;

        
        cout << "Введите оператора, на который Вы будете звонить:\n"
            << "1 - МТС\n"
            << "2 - Билайн\n"
            << "3 - Мегафон\n";
        cin >> collingIn;

        if (collingFrom == collingIn)
        {
            cout << "Звонки внутри сети бесплатны!\n"
                << "Для рассчета стоимости звонка введите 1\n"
                << "Для завершения программы введите 0\n";
            cin >> programmContinue;
        }
        else if (collingFrom == 1)
        {
            cout << "Введите длительность разговора в минутах\n";
            cin >> callLength;

            cout << "Стоимость звонка составляет " << double(int(callLength * mts * 100 + 0.5) / 100.0) << "руб.\n"
                << "Для рассчета стоимости звонка введите 1\n"
                << "Для завершения программы введите 0\n";
            cin >> programmContinue;

        }
        else if (collingFrom == 2)
        {
            cout << "Введите длительность разговора в минутах\n";
            cin >> callLength;

            

            cout << "Стоимость звонка составляет " << double (int(callLength * beeline * 100 + 0.5) / 100.0) << "руб.\n"
                << "Для рассчета стоимости звонка введите 1\n"
                << "Для завершения программы введите 0\n";
            cin >> programmContinue;

        }
        else if (collingFrom == 3)
        {
            cout << "Введите длительность разговора в минутах\n";
            cin >> callLength;

            cout << "Стоимость звонка составляет " << double(int(callLength * megafone * 100 + 0.5) / 100.0) << "руб.\n"
                << "Для рассчета стоимости звонка введите 1\n"
                << "Для завершения программы введите 0\n";
            cin >> programmContinue;

        }
    }
}

