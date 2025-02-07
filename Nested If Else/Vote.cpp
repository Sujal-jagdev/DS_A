#include <iostream>
using namespace std;

// vote - nested
int main()
{
    int age;
    cout << "Enter a Your Age: ";
    cin >> age;

    if (age >= 18)
    {
        if (age > 100)
        {
            cout << "Please a Enter Valid Age!!";
        }
        else
        {
            cout << "You are Eligible to Vote!!";
        }
    }
    else
    {
        if (age <= 0)
        {
            cout << "Please a Enter Valid Age!!";
        }
    }
    return 0;
}