#include <iostream>
using namespace std;

int main()
{
    char count = 'A';
    for (char i = 1; i <= 5; i++)
    {
        for (char j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}