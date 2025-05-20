#include<iostream>
using namespace std;

int main(){

    int a;
    int b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;
    
    if(a == b){

        cout << "Both are equal";
    }
    else if(a > b){

        cout << a << " is greater";
    }
    else{

        cout<< b << " is greater";
    }




    return 0;
}