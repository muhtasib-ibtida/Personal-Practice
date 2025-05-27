#include<iostream>
using namespace std;


int main(){

    char opr;

    cout << "Enter an operator: ";
    cin >> opr;


    if(opr == '+'){
        int a, b;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        cout << "The result is: " << a+b;
    }else if(opr == '-'){
        int a, b;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        cout << "The result is: " << a-b;
    }else if(opr == '*'){
        int a, b;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        cout << "The result is: " << a*b;
    }else if(opr == '/'){
        double a, b;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        cout << "The result is: " << a/b;
    }else{
        cout << "Invalid operator";
    }





    return 0;
}