#include <iostream>
using namespace std;

int main()
{
	int percentage;

	cout << "Enter Your Percentage: ";
	cin >> percentage;

	if (percentage >= 90 && percentage <= 100)
	{
		cout << endl
			 << "Your Grade Is: A+";
	}
	else if (percentage >= 80 && percentage <= 89)
	{
		cout << endl
			 << "Your Grade Is: A";
	}
	else if (percentage >= 70 && percentage <= 79)
	{
		cout << endl
			 << "Your Grade Is: B";
	}
	else if (percentage >= 60 && percentage <= 69)
	{
		cout << endl
			 << "Your Grade Is: C";
	}
	else if (percentage >= 50 && percentage <= 59)
	{
		cout << endl
			 << "Your Grade Is: D";
	}
	else if (percentage >= 35 && percentage <= 49)
	{
		cout << endl
			 << "Your Grade Is: E";
	}
	else if (percentage < 35)
	{
		cout << endl
			 << "Your Are Fail!!";
	}
	return 0;
}