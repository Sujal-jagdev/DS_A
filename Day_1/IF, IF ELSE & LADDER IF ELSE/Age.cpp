#include<iostream>
using namespace std;

void main(){
	int age;
	cout << "Enter Your Age: ";
	cin >> age;
	
	if(age == 0 || age < 0 || age >= 100){
		cout << "Please Enter a Valid Age Value.";
	}
	else if(age >= 18){
		cout << "You Are Eligebale For Vote.";
	}
	else{
		cout << "You Are Not Eligebale For Vote.";
	}
	
	return 0;
}