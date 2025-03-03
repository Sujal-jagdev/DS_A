#include<iostream>
using namespace std;

void FindCude(int n){
	int sum = 1;
	for(int i = 1; i<=n; i++){
		sum = sum * i;
	}
	cout << endl << "Factorial Of Numbers: " << sum;
}

int main(){
	  // wap to find factorial user passed number using udf.
	int Value;
	cout << "Enter Value: ";
	cin >> Value; 
	cout << endl;
	FindCude(Value);
	return 0;
}