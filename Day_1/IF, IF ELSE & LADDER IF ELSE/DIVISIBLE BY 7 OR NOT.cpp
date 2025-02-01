#include<iostream>
using namespace std;

//WAP TO CHECK GIVEN NUMBER IS DIVISIBLE BY 7 OR NOT.
int main(){

	int num,result;
	cout << "Enter Number: ";
	cin >> num;
	
	result = num%7;
	if(result == 0){
		cout << endl << num << " Number Is Divisible By 7";
	}else{
		cout << endl << num << " Number Is Not Divisible By 7";
	}
return 0;
}