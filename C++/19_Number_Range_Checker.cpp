#include<iostream>
using namespace std;

int main(){

    int a;

    cout << "Enter a number: ";
    cin >> a;
    
    if(a >= 1 && a <= 100){

        cout << "Within range";
    }
    else{

        cout<< "Not in range";
    }

    return 0;
}