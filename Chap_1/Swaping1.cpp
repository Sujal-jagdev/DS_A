#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = num2;

    num2 = num1;
    num1 = num3;

    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
    return 0;
}