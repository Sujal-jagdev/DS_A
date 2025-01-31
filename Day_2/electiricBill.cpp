#include<iostream>
using namespace std;

int main(){
	
	int unit,amount;
	cout << "Enter Your Units: ";
	cin >> unit;
	
	if(unit >= 0 && unit <= 50){
		amount = unit * 1;	
	}
	else if(unit >= 51 && unit <= 100){
		unit = unit - 50;
		amount = (unit * 1.5); 
		amount += 50;
	}
	else if(unit >= 101 && unit <= 150){
		unit = unit - 100;
		amount = unit * 2;
		amount += 125;
	}
	else if(unit > 150){
		unit = unit - 150;	
		amount = unit * 3;
		amount += 225;
	}
		
	cout << endl << "Your Electicy Bill Amount: " << "$" << amount;
	return 0;
}    