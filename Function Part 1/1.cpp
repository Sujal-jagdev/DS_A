#include<iostream>
using namespace std;

void FindCude(int n){
	cout << "Cube Of " << n << " = " << n*n*n;
}

int main(){
	// wap to find cube of user passed number using udf.
	int Value;
	cout << "Enter Value: ";
	cin >> Value; 
	cout << endl;
	FindCude(Value);
	return 0;
}