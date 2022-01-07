#include <iostream>
#include <random>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    const int size = 10;
    double randArray[size];

  
    cout << "Массив случайных вещественных чисел от -10 до 10:\n";
    mt19937 gen(time(0));
    uniform_real<> distribution(-10, 10);

    for (int i = 0; i < size; i++)
    {
        
       randArray[i] = distribution(gen);
        if (i == size - 1)
        {
            cout << randArray[i] << ".\n";
            break;
        }
        cout << randArray[i] << ", ";
    }


    double negativeSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (randArray[i] < 0)
        {
            negativeSum += randArray[i];
        }
    }

    cout << "Сумма отрицательных элементов: " << negativeSum << "\n\n";

  double min = randArray[0];
  double max = randArray[0];

  int seqNumMin = 0;
  int seqNumMax = 0;

  for (int i = 0; i < size; i++)
  {
      if (randArray[i] < min)
      {
          min = randArray[i];
          seqNumMin = i;
      }
      if (randArray[i] > max)
      {
          max = randArray[i];
          seqNumMax = i;
      }
  }
  double product;
  if (seqNumMax == seqNumMin || seqNumMax == seqNumMin + 1 || seqNumMax == seqNumMin - 1)
  {
      product = 0;
  }

  else if (seqNumMax > seqNumMin)
  {
      product = randArray[seqNumMin + 1];

      for (int i = seqNumMin + 2; i < seqNumMax; i++)
      {
          product *= randArray[i];
      }
  }
  else if (seqNumMax < seqNumMin)
  {
      product = randArray[seqNumMax + 1];

      for (int i = seqNumMax + 2; i < seqNumMin; i++)
      {
          product *= randArray[i];
      }
  }
  
  cout << "Произведение чисел, находящихся между минимальным (" << min << ") и максимальным (" << max << ")\n"
      << "числом в массиве равно " << product << "\n\n";


  double productEven = randArray[1];
      for (int i = 3; i < size; i++)
      {
          if (i % 2)
          {
              productEven *= randArray[i];
          }
      }

      cout << "Произведение всех чисел с четными номерами (нумерация чисел начинается с еденицы) равна " << productEven << "\n\n";


      double firstNegativeNum = 0;
      double lastNegativeNum = 0;
      int firstSeqNum;
      int lastSeqNum;
      double sumBtwNegative = 0;

      for (int i = 0; i < size; i++)
      {
          if (randArray[i] < 0)
          {
              firstNegativeNum = randArray[i];
              firstSeqNum = i;
              break;
          }
      }
      for (int i = size - 1; i >= 0; i--)
      {
          if (randArray[i] < 0)
          {
              lastNegativeNum = randArray[i];
              lastSeqNum = i;
              break;
          }
      }

    
          for (int i = firstSeqNum + 1; i < lastSeqNum; i++)
          {
              sumBtwNegative += randArray[i];
          }
    
      cout << "Сумма элементов между первым (" << firstNegativeNum << ") и последним (" << lastNegativeNum << ") отрицательным\n"
          << "числом в массиве равна " << sumBtwNegative << "\n\n";
}

