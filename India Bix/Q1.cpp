#include <iostream>
using namespace std;

// 1.Look at this series: 2, 1, (1/2), (1/4), ... What number should come next?
int main()
{

    int num = 2;
    cout << num << " ";
    cout << num / num << " ";

    for (int i = 1; i < 6; i++)
    {
        cout << "1/" << num << " ";
        num *= 2;
    }

    return 0;
}