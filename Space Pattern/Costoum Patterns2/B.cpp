#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i<=7; i++){
        for(int j = 1; j<=5; j++){

          if(j == 1){
            cout << "* ";
          }
         if(j <= 3 && (i == 1 || i == 4 || i == 7)){
          cout << "* ";
         }
         else if((i == 2 || i == 3) && j == 4 ){
          cout << "      *";
         }
         else if((i == 5 || i == 6) && j == 4 ){
          cout << "      *";
         }
        }
        cout << endl;
    }
    return 0;
}