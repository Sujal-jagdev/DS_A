#include <iostream>
using namespace std;

void FindMax(int row, int col)
{
    int max = 0;
    int Arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter The Value Of [" << i << "]" << "[" << j << "] : ";
            cin >> Arr[i][j];
        }
    }
    max = Arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < Arr[i][j])
            {
                max = Arr[i][j];
            }
        }
    }

    cout << endl << "Max Number Is: " << max; 
}

int main()
{
    int row, col;
    cout << "Enter The Size Of Row: ";
    cin >> row;
    cout << "Enter The Sixe Of Col: ";
    cin >> col;

    FindMax(row, col);

    return 0;
}