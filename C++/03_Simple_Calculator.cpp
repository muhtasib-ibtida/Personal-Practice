//Write a program that takes two numbers and an operator (+, -, *, /) as input and prints the result of the operation.
#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 5;
    string sum = "The summation is: ";
    string sub = "The subtraction is: ";
    string mul = "The multiplication is: ";
    string div = "The division is: ";


    cout << sum << a+b <<endl;
    cout << sub << a-b <<endl;
    cout << mul << a*b <<endl;
    cout << div << a/b <<endl;




    return 0;
}
