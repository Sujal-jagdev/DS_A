#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 && ( i == 2 || i == 3 ))
            {
                cout << "* ";
            }
            else if((i == 1 && j != 1) || ( i == 4 && ( j != 1 && j != 5)) || ( i == 7 && j != 5 )){
                cout << "* ";
            }
            else if( j == 5 && ( i == 5 || i == 6 ))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}