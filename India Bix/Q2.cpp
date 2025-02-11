#include <iostream>
using namespace std;

// 2.Look at this series: 7, 10, 8, 11, 9, 12, ... What number should come next?
int main()
{
    int num = 7;

    for (int i = 0; i < 10; i++)
    {

        cout << num << " ";
        num += 3;
        cout << num << " ";
        num -= 2;
    }

    return 0;
}