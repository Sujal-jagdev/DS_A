#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if( (j == 1 && i == 1) || (j == 2 && i == 2)|| (j == 3 && i == 3)){
                cout << "* ";
            }
            else if((j == 5 && i == 1) || (j == 4 && i == 2)|| (j == 3 && i == 3)){
                cout << "* ";
            }
            else if(j == 3 && ( i != 1 && i != 2 && i != 3)){
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