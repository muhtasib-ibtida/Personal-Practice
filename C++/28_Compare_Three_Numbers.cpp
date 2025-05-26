#include<iostream>
using namespace std;

int main() {
    
    int a;
    int b;
    int c;


    cout << "Enter three numbers: ";
    cin >> a;
    cin >> b;
    cin >> c;

    
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "The largest number is: " << largest;

    
    
    
    
    return 0;
}
