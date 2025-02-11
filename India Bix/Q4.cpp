#include<iostream>
using namespace std;

// 4. Look at this series: 22, 21, 23, 22, 24, 23, ... What number should come next?
int main(){
    int num = 22;
     for(int i =0; i < 5; i++){
        cout << num << " ";
        num -= 1;
        cout << num << " ";
        num += 2;
     }

    return 0;
}