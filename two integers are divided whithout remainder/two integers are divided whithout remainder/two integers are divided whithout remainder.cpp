#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    
    int firstNum = 0;
    int secondNum = 0;
    int checkNum = 1;
    string collectNums;

    cout << "Введите два целых числа в диапазоне от -999999999 до 999999999\n"
        << "и программа посчитает, на какие числа они оба делятся без остатка.\n";
    cout << "Первое число: \n";
    cin >> firstNum;

    if (firstNum < -999999999 || firstNum > 999999999)
    {
        cout << "Число должно находится в заданном диапазоне.\n";
        return 0;
    }

    cout << "Второе число: \n";
    cin >> secondNum;

    if (secondNum < -999999999 || secondNum > 999999999)
    {
        cout << "Число должно находится в заданном диапазоне.\n";
        return 0;
    }
    

    if (!firstNum && !secondNum)
    {
        cout << "нули делятся без остатка на все числа.\n";
        return 0;
    }
    if (!firstNum)
    {
        if (secondNum < 0)
        {
            secondNum = -secondNum;
        }
        {
            while (checkNum <= secondNum)
            {
                if (!(secondNum % checkNum))
                {
                    collectNums += to_string (checkNum) + ", ";
                    collectNums += to_string(-checkNum)  + ", ";
                    
                }
                checkNum++;
                
            }
        }
    }

    else if (!secondNum)
    {
        if (firstNum < 0)
        {
            firstNum = -firstNum;
        }
        {
            while (checkNum <= firstNum)
            {
                if (!(firstNum % checkNum))
                {
                    collectNums += to_string(checkNum) + ", ";
                    collectNums += to_string(-checkNum) + ", ";
                    
                }
                checkNum++;
                
            }
        }
    }

    else
    {
        if (firstNum < 0)
        {
            firstNum = -firstNum;
        }
        if (secondNum < 0)
        {
            secondNum = -secondNum;
        }
        while (checkNum <= firstNum && checkNum <= secondNum)
        {
            if (!(firstNum % checkNum) && !(secondNum % checkNum))
            {
                collectNums += to_string(checkNum) + ", ";
                collectNums += to_string(-checkNum) + ", ";
                checkNum++;
            }
            checkNum++;
        }
    }
    cout << collectNums.substr(0, collectNums.length() - 2) << "." << endl;
}


