#include <iostream>
using namespace std;

// 0
// 0 1
// 0 1 0
// 0 1 0 1
// 0 1 0 1 0
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "1" << " ";
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }

    return 0;
}