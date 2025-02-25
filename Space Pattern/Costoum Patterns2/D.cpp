#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1)
            {
                cout << "* ";
            }
            if(j == 2 && (i == 1 || i == 7)){
                cout << "*";
            }
            if(j == 3 && (i == 2 || i == 6)){
                cout << "  *";
            }
            if(j == 4 && (i == 3 || i == 5)){
                cout << "   *";
            }
            if(j == 5 && i == 4){
                cout << "   *";
            }
            
        }
        cout << endl;
    }
    return 0;
}