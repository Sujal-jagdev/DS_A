#include<iostream>
using namespace std;

int main(){

    int num,a=0,b=1,next;
    cout << "Enter The Value Of num: ";
    cin >> num;

    for(int i = 0; i<=num; i++){
       cout << a << " ";
       next = a + b; //next = 1;
       a = b;
       b = next;
    }

    return 0;
}