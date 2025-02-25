#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Size Of Arr: ";
    cin >> n;
    cout << endl;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Value The Value Of Arr" << "[" << i << "]" << ": ";
        cin >> arr[i];
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}