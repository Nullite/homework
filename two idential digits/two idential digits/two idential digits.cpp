#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int startNumber = 100;
    int count = 0;
    
    while (startNumber <= 999)
    {
        int tempDigit1 = 0, tempDigit2, tempDigit3, tempNumber = 0;
        tempDigit1 = startNumber % 10;
        tempNumber = startNumber / 10;
        tempDigit2 = tempNumber % 10;
        tempDigit3 = startNumber / 100;

        

        if (tempDigit1 == tempDigit2 || tempDigit1 == tempDigit3 || tempDigit2 == tempDigit3)
        {
            count++;
        }
            
        startNumber++;

    }
    cout << " В диапазоне от 100 до 999 включительно " << count << " числа имеют как минимум две одинаковые цифры в своем составе.\n";
    return 0;
}

