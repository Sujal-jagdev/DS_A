#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter The Size Of Arr: ";
    cin >> n;

    int Arr[n], Sum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter The Value Of Arr[" << i << "]" << ": ";
        cin >> Arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        Sum = Sum + Arr[i];
    }

    cout << "The Sum Of All Number: " << Sum ;

    return 0;
}