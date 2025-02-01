#include <iostream>
using namespace std;

int main()
{

	int price;
	cout << "Enter You Price: ";
	cin >> price;

	if (price > 0 && price <= 1000)
	{
		price -= (price * 5) / 100;
	}
	else if (price >= 1001 && price <= 5000)
	{
		price -= (price * 10) / 100;
	}
	else if (price >= 5001 && price <= 1000)
	{
		price -= (price * 20) / 100;
	}
	else if (price > 1000)
	{
		price -= (price * 25) / 100;
	}
	else
	{
		cout << "Please Enter a Valid Price.";
	}

	if (price > 0)
	{
		cout << endl
			 << "Your Bill: " << endl;
		cout << "Final Bill Price: " << price;
	}
	return 0;
}