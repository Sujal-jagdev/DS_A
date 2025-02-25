#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter The Size Of Arr: ";
    cin >> n;

    int Arr[n], Max = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter The Value Of Arr[" << i << "]" << ": ";
        cin >> Arr[i];
    }
    Max = Arr[0];
    for (int i = 0; i < n; i++)
    {
        if(Max < Arr[i]){
            Max = Arr[i];
        }
    }

    cout << "The Max Number Is: " << Max ;

    return 0;
}