#include<iostream>
using namespace std;

void FindCude(){
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
}
		
int main(){
   // wap print all tables from 1 to user passed number using udf.
	FindCude();
	return 0;
}
