#include <iostream>
using namespace std;

int main()
{
    int firstElem = 0;
    const int rows = 3;
    const int cols = 3;

    int array[rows][cols];

    cout << "Enter first element of two-dimensional array\n"
         << "and programm will fill this array with elements\n"
         << "so that the next element is equal to the previous\n"
         <<"one multiplied by 2. (element must be integer)\n";

    cin >> firstElem;
    cout << "\n\n\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (!j && !i)
            {
                array[i][j] = firstElem;
                cout << array[i][j] << " ";
                continue;
            }
            if (!j)
            {
                array[i][j] = array[i - 1][cols - 1] * 2;
                cout << array[i][j] << " ";
                continue;
            }
            
                array[i][j] = array[i][j - 1] * 2;
                cout << array[i][j] << " ";
            
        }
        cout << "\n";
    }

}

