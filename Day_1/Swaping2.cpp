#include <iostream>
using namespace std;

int main()
{
	int Num1 = 10;
	int Num2 = 20;

	Num1 = Num1 + Num2;
	Num2 = Num1 - Num2;
	Num1 = Num1 - Num2;

	cout << "Num1: " << Num1 << endl;
	cout << "Num2: " << Num2 << endl;

	return 0;
}