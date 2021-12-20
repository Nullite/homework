#include <iostream>
#include <string>
using namespace std;

int delete36(string number)
{
    
    string cut36;
    if (number.length() > 13)
    {
        cout << "Слишком большое число, введите число от -999999999999 до 9999999999999 включительно.\n";
        return 0;
    }
    if ((int)number[0] == 45)
    {
        cut36 += number[0];
    }
    for (int i = 0; i < number.length(); i++)
    {
        if ((int)number[i] > 47 && (int)number[i] != 51 && (int)number[i] != 54 && (int)number[i] < 58)
        {
            cut36 += number[i];

        }
        
    }
     
    return stoi(cut36);
}           

int main()
{
    setlocale(LC_ALL, "rus");

    string getNum;

    cout << "Введите любое целое число от -999999999999 до 9999999999999 включительно и программа удалит из него все цифры 3 и 6.\n";
    
    getline(cin, getNum);

    cout << delete36(getNum);

    return 0;
}

