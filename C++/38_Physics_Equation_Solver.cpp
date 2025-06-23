#include<iostream>
#include<math.h>
using namespace std;

int main(){

    double mass, speed, ke;


    cout << "Enter mass of the object: ";
    cin >> mass;

    cout << "Enter speed of the object: ";
    cin >> speed;

    
    
    ke = 0.5 * mass * pow(speed,2);

    
    cout << "Kinetic energy of the object is: " << ke;







    return 0;
}