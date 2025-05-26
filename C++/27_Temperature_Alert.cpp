#include<iostream>
using namespace std;

int main() {
    
    int temp;
    
    
    cout << "Enter the temperature in celcius: ";
    cin >> temp;

    
    string result = (temp < 10) ? "Cold" : (temp <= 25 ? "Warm" : "Hot");
    cout << result;







    return 0;
}
