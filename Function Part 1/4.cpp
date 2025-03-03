#include<iostream>
using namespace std;

void FindCude(int n){
	int sum = 1, divison = 0;
	for(int i = 1; i<=n; i++){
		if(n%i == 0){
			divison++;
		}
	}
	if(divison>2){
		cout << endl << "This Is Not Prime Number";
	}else{
	cout << endl << "This Is Prime Number";
	}
}

int main(){
	// wap to check number is prime or not of user passed number using udf.
	int Value;
	cout << "Enter Value: ";
	cin >> Value; 
	cout << endl;
	FindCude(Value);
	return 0;
}