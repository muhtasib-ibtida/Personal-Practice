#include<iostream>
using namespace std;

int main() {
    
    int day;
    
    
    cout << "Enter a day (1-7): ";
    cin >> day;

    
    string result = (day <= 7 && day >=1 ) ? (day == 1 || day == 2) ? "Weekend" : "Weekday" : "Invalid input";

    
    cout << result;

    
    
    
    
    
    
    return 0;
}
