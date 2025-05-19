#include<iostream>
using namespace std;

int main(){

    int a;

    cout << "Enter temperature in celcius: ";
    cin >> a;

    if(a < 10){

        cout << "It's cold";
    }
    else if(a >= 10 && a < 25){

        cout << "It's moderate";
    }
    else{

        cout << "It's warm";
    }




    return 0;
}