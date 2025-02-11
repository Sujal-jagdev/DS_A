#include <iostream>
using namespace std;

// 5. Look at this series: 53, 53, 40, 40, 27, 27, ... What number should come next?
int main()
{
    int num = 53;
    for (int i = 0; i < 5; i++)
    {
        cout << num << " " << num << " ";
        num -= 13;
    }

    return 0;
}