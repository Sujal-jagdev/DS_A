#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter The Value Of Arr: ";
    cin >> n;
    cout << endl;

    int arr[n]; 

    for(int i = 0; i<n; i++){
        cout << "Enter The Value Of Arr[" << i << "]" << ": ";
        cin >> arr[i];
    }

    for(int i = 0; i<n; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << " ";
        }
    }

    return 0;
}