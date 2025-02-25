#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 && (i == 2 || i == 3 || i == 4 || i == 5 || i == 6))
            {
                cout << "* ";
            }
            if ((i == 1 || i == 4 || i == 7) && (j == 2 || j == 3 || j == 4))
            {
                cout << "  *";
            }
            if ((i == 2 || i == 5 || i == 6) && j == 5)
            {
                cout << "        *";
            }
        }
        cout << endl;
    }
    return 0;
}