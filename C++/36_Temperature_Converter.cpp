#include<iostream>
#include <math.h>
using namespace std;

int main() {
    
    double celsius, fahrenheit;
    
    
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;


    fahrenheit = (celsius * 9 / 5) + 32;

   
    cout << "Temperature in Fahrenheit: " << round(fahrenheit);






    return 0;
}
