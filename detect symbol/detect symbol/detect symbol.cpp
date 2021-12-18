#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "rus");

   int programmContinue = 1;
   char symbol;
   
   
   

   while (programmContinue)
   {
	   
	   cout << "Введите символ. \n";
	   cin >> symbol;


	   if ((int)symbol < 48 || (int)symbol > 57 && (int)symbol < 65 || (int)symbol > 90 && (int)symbol < 97 || (int)symbol > 123)
	   {
		   cout << "Вы ввели знак.\n"
			   << "Для завершения работы введите 0.\n"
			   << "Для продолжения введите 1 или любое другое число.\n";
		   cin >> programmContinue;
	   }

	   else if ((int)symbol > 47 && (int)symbol < 58)
	   {
		   cout << "Вы ввели цифру.\n"
			   << "Для завершения работы введите 0.\n"
			   << "Для продолжения введите 1 или любое другое число.\n";
		   cin >> programmContinue;
	   }

	   else if ((int)symbol > 64 && (int)symbol < 91)
	   {
		   cout << "Вы ввели заглавную букву.\n"
			   << "Для завершения работы введите 0.\n"
			   << "Для продолжения введите 1 или любое другое число.\n";
		   cin >> programmContinue;
	   }

	   else if ((int)symbol > 96 && (int)symbol < 123)
	   {
		   cout << "Вы ввели строчную букву.\n"
			   << "Для завершения работы введите 0.\n"
			   << "Для продолжения введите 1 или любое другое число.\n";
		   cin >> programmContinue;
	   }
	  
	   
   }


   
}
