#include<iostream>
using namespace std;

void FindCude(int n){
	int sum;
	for(int i = 1; i<=n; i++){
		sum = sum + i;
	}
	cout << endl << "Sum Of Numbers: " << sum;
}

int main(){
	  // wap to find sum of 1 to user passed number using udf.
	int Value;
	cout << "Enter Value: ";
	cin >> Value; 
	cout << endl;
	FindCude(Value);
	return 0;
}