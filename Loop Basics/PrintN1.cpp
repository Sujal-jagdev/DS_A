#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter The Value Of N: ";
    cin >> n;
    for (int i = n; i <= n; i--)
    {
        if (i >= 1)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}