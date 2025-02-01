#include<iostream>
using namespace std;

//WAP TO CHECK NUMBER IS NEGATIVE, POSITIVE, OR NEUTRAL.
int main(){
	
	int num;
	cout << "Enter Number: ";
	cin >> num;
	
	if(num >= 0){
		if(num == 1 || num ==0){
			cout << endl << "This Is Neatural Number.";
		}
		else{
			cout << endl << "This Is Positive Number.";
		}
	}else if(num < 0) {
		cout << endl << "This Is Negative Number.";
	}
	
	return 0;
}