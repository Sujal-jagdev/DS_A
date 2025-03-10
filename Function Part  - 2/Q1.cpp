#include<iostream>
using namespace std;

void FP2(int n,int i){
    if(i <= n){
        cout << i << endl;
        i++;
        FP2(n,i);
    }
}

int main(){
    int i = 1;
    int n;
    cout << "Enter The Value Of: ";
    cin >> n;
    cout << endl;
    FP2(n,i);
}