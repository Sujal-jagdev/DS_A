#include<iostream>
using namespace std;

void FindCude(int n){
	
	int part = n/5;
	
	for(int a=1; a<=part; a++){
		for(int i = 1; i<=10; i++){
			for(int j = 1; j<=5; j++){
			cout << j << " X ";
			if(i != 10){
				cout << " ";
			}
			else {
				cout << "";
			}
			cout << i << " =";
			
			if(i*j > 9){
				cout << " ";
			}else{
				cout << "  ";
			}
			cout << i * j << "  ";
		}
		cout << endl;
		}
		cout << endl << endl;
	}
}
		
int main(){
   // wap print all tables from 1 to user passed number using udf.
   int n;
   cout << "Enter The Value Of N: ";
   cin >> n;
	FindCude(n);
	return 0;
}