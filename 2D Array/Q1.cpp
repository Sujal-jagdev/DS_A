#include <iostream>
using namespace std;

void FindAverage(int row, int col)
{   
    int sum = 0, count = 0;
    int Arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter The Value Of [" << i << "]" << "[" << j << "] : ";
            cin >> Arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + Arr[i][j];
            count++;
        }
    }

    cout << endl << "Average Of This All Numbers Is: " << sum/count;

}

int main()
{
    int row, col;
    cout << "Enter The Size Of Row: ";
    cin >> row;
    cout << "Enter The Sixe Of Col: ";
    cin >> col;

    FindAverage(row,col);

    return 0;
}