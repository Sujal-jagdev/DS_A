#include <iostream>
using namespace std;

void PrintTable(int n)
{

    int print = 5;
    for (int a = 1; a <= n; a += print) // a=1 || 1<=15
    {
        for (int i = 1; i <= 10; i++) //i = 2
        {
            for (int j = a; j < a + print && j <= n; j++)// j = 6  || 6 < 11 && 6 <= 15
            {
                cout << j << " X " << i;
                if (i * j <= 9)
                {
                    cout << " =  ";
                }
                else if (i * j >= 9 && i != 10)
                {
                    cout << " = ";
                }
                if (i == 10)
                {
                    cout << "= ";
                }
                cout << i * j;
                if (i * j <= 9)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        cout << endl
             << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Table Number: ";
    cin >> n;
    cout << endl
         << endl;
    PrintTable(n);
    return 0;
}