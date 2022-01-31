#include <iostream>
using std::cout;
using std::cin;

double repeatPow(double num, double deg)
{
    cout <<num << " raised to degree "<< deg << " is "<< pow(num, deg);
    return pow(num, deg);
}

int main()
{
    double number, degree;

    cout << "Enter a Number\n";
    cin >> number;

    cout << "Enter a degree\n";
    cin >> degree;

    repeatPow(number, degree);
   
}

