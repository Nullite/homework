#include <iostream>
#include <string>
using namespace std;

int main()
{

    setlocale(LC_ALL, "rus");

    int num = 0;
    int checkNum = 1;
    string collectNums;
   

    cout << "Введите целое число в диапазоне от -999999999 до 999999999 и программа рассчитает\n"
        << "все числа, на которые это число делится без остатка.\n";
    cin >> num;

    if (num < -999999999 || num > 999999999)
    {
        cout << "Число должно быть в заданном диапазоне.\n";
        return 0;
    }
    
    if (!num)
    {
        cout << "0 делится без остатка на все числа в диапазоне от -infinity до +infinity.\n";
        return 0;
    }

    if (num < 0)
    {
        num = -num;
    }

        while (checkNum <= num)
        {
            if (!(num % checkNum))
            {
                collectNums += to_string(checkNum) + ", ";
                collectNums += to_string(-checkNum) + ", ";
            }
            checkNum++;
        }
       
    

        cout << collectNums.substr(0, collectNums.length() - 2) << "." << endl;
        return 0;
    
}

