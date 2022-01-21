#include <iostream>
#include <Windows.h>
using namespace std;



int main()
{
    const int cols = 5;
    const int rows = 5;
    int shift = 0, direction = 0, temp = 0, i = 0, j = 0;
    int array[rows][cols];

    cout << "original random array:\n\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 10;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    while (shift < 1 || shift > 5)
    {
        cout << "enter a integer that means how much will the array elements shift (from 1 to 5)\n";
        cin >> shift;
        if (shift < 1 || shift > 5)
        {
            cout << "incorrect input!\n";
        }
        
    }

    while (direction < 1 || direction > 4)
    {
        cout << "enter a integer that means direction of shifting:\n"
            << " 1 - right\n"
            << " 2 - left\n"
            << " 3 - up\n"
            << " 4 - down\n";
        cin >> direction;
        if (direction < 1 || direction > 4)
        {
            cout << "incorrect input!\n";
        }
        
    }

    srand(time(NULL));




   

    switch (direction)
    {
    case 1:
        while (shift)
        {
            shift--;
            while (i < rows)
            {
                temp = array[i][rows - 1];
                for (int j = cols - 1; j > 0; j--)
                {
                    array[i][j] = array[i][j - 1];
                }
                array[i][0] = temp;
                i++;
            }
            i = 0;

        }
        break;

    case 2:
        while (shift)
        {
            shift--;
            while (i < rows)
            {
                temp = array[i][0];
                for (int j = 0; j < cols - 1; j++)
                {
                    array[i][j] = array[i][j + 1];
                }
                array[i][cols - 1] = temp;
                i++;


            }
            i = 0;

        }
        break;

    case 3:
        while (shift)
        {
            shift--;
            while (j < cols)
            {
                temp = array[0][j];
                for (int i = 0; i < rows - 1; i++)
                {
                    array[i][j] = array[i + 1][j];
                }
                array[rows - 1][j] = temp;
                j++;


            }
            j = 0;

        }
        break;

    case 4:
        while (shift)
        {
            shift--;
            while (j < cols)
            {
                temp = array[rows - 1][j];
                for (int i = rows - 1; i > 0; i--)
                {
                    array[i][j] = array[i - 1][j];
                }
                array[0][j] = temp;
                j++;


            }
            j = 0;

        }
        break;
    }


    cout << "\nshifted array:\n\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }


}