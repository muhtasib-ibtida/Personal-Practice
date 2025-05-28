#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double value;
    

    cout << "Enter a value: ";
    cin >> value;
    

    int rounded = round(value);       
    int roundedDown = floor(value);   
    int roundedUp = ceil(value);     


    cout << "Rounded to the nearest integer: " << rounded << endl;
    cout << "Rounded down: " << roundedDown << endl;
    cout << "Rounded up: " << roundedUp;
    cout << "Rounded up: " << roundedUp;






    return 0;
}
