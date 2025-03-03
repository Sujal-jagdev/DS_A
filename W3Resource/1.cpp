#include <iostream>
using namespace std;

int main()
{

    int n, count = 0;
    cout << "Enter N: ";
    cin >> n;
    int Arr[n];
    bool counted[n] = {false};

    for (int i = 0; i < n; i++)
    {
        cout << "Enter The Value Of [" << i << "]: ";
        cin >> Arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (counted[i]) continue;
        
        for (int j = i + 1; j < n; j++)
        {
            if (Arr[i] == Arr[j])
            {
                count++;
                counted[j] = true;
            }
        }
    }

    cout << count;

    return 0;
}