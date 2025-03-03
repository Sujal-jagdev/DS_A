#include <iostream>
using namespace std;

void FindMax(int row, int col)
{
    int diagonalSum = 0, AntiDiagonalSum = 0;
    int Arr[row][col];
    int index1 = 0, index2 = 0, index3 = 0,index4 = col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter The Value Of [" << i << "]" << "[" << j << "] : ";
            cin >> Arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (index1 < row && index2 < col)
            {
                cout << Arr[index1][index2] << " ";
                diagonalSum = diagonalSum + Arr[index1][index2];
                index1++;
                index2++;
            }
        }
    }
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (index3 < row && index4 >= 0)
            {
                cout  << Arr[index3][index4] << " ";
                AntiDiagonalSum = AntiDiagonalSum + Arr[index3][index4];
                index3++;
                index4--;
            }
        }
    }

    cout << endl << endl
         << "The Sum Of Diagonal Numbers: " << diagonalSum;
    cout << endl
         << "The Sum Of AntiDiagonal Numbers: " << AntiDiagonalSum;
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