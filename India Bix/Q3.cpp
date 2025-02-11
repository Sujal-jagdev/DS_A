#include <iostream>
using namespace std;

// 3.Look at this series: 36, 34, 30, 28, 24, ... What number should come next?
int main()
{
    int num = 36;

    for (int i = 0; i < 5; i++)
    {
        cout << num << " ";
        num -= 2;
        cout << num << " ";
        num -= 4;
    }

    return 0;
}