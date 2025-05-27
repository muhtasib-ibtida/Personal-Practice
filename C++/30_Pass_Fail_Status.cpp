#include<iostream>
using namespace std;

int main() {
    
    int mark;
    
    
    cout << "Enter your marks: ";
    cin >> mark;

    
    string result = (mark <= 100 && mark >= 0) ? (mark >= 50) ? "You Passed" : "You Failed" : "Invalid input";

    
    cout << result;

    
    
    
    
    
    
    
    return 0;
}
