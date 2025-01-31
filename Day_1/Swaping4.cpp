#include <iostream>
using namespace std;

int main()
{
	int Num1 = 10;
	int Num2 = 20;

	Num1 = Num1 ^ Num2; // n1 = 01010 ^ n2 = 10100 == 11110
	Num2 = Num1 ^ Num2; // 11110 ^ 10100 = 01010
	Num1 = Num1 ^ Num2; // 11110 ^ 01010 = 10100

	cout << "Num1: " << Num1 << endl;
	cout << "Num2: " << Num2 << endl;

	return 0;
}