#include <iostream>
using namespace std;

// Finding Maximum Number From A,B,C;
int main()
{
    int a, b, c;
    cout << "Please Enter Value Of A: ";
    cin >> a;
    cout << "Please Enter Value Of B: ";
    cin >> b;
    cout << "Please Enter Value Of C: ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "A Is Max Number";
        }
        else
        {
            cout << "C Is Max Number";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "B Is Max Number";
        }
        else
        {
            cout << "C Is Max Number";
        }
    }

    return 0;
}