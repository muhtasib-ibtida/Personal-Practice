#include<iostream>
using namespace std;

int main() {
    
    int option;
    double value, convertedValue;


    cout << "Select a conversion option: " << endl;
    cout << "1. Miles to Kilometers " << endl;
    cout << "2. Kilograms to Pounds " << endl;
    cout << "3. Liters to Gallons " << endl;
    cout << "Enter option (1, 2, or 3): ";
    cin >> option;


    switch(option) {
        case 1:
            cout << "Enter the value in miles: ";
            cin >> value;
            
            convertedValue = value * 1.60934;
            cout << value << " miles is " << convertedValue << " kilometers";
            break;
        case 2:
            cout << "Enter the value in kilograms: ";
            cin >> value;
            
            convertedValue = value * 2.20462;
            cout << value << " kilograms is " << convertedValue << " pounds";
            break;
        case 3:
            cout << "Enter the value in liters: ";
            cin >> value;
            
            convertedValue = value * 0.264172;
            cout << value << " liters is " << convertedValue << " gallons";
            break;
        default:
            cout << "Invalid option";
    }






    return 0;
}
