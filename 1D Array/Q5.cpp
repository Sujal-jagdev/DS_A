#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter The Size Of Arr: ";
    cin >> n;

    int Arr[n], Acending = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter The Value Of Arr[" << i << "]" << ": ";
        cin >> Arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (Arr[i] > Arr[j])
            {
                Acending = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = Acending;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}