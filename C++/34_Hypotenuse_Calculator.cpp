#include<iostream>
#include<math.h>
using namespace std;

int main() {
    
    double side1, side2, hypotenuse;


    cout << "Enter the length of the first side: ";
    cin >> side1;
    
    
    cout << "Enter the length of the second side: ";
    cin >> side2;


    hypotenuse = sqrt((side1 * side1) + (side2 * side2));


    cout << "The length of the hypotenuse is: " << hypotenuse;








    return 0;
}
