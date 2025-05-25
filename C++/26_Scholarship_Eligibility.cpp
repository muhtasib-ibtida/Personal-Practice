#include<iostream>
using namespace std;

int main() {
    
    float cgpa;
    
    
    cout << "Enter your GPA: ";
    cin >> cgpa;



    string result = (cgpa >= 3.5 && cgpa <= 4) ? "Congratulations! You are eligible for Scholarship" : "Sorry you are not Eligible";
    cout << result;




    return 0;
}
