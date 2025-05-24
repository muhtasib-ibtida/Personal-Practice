#include <iostream>
using namespace std;

int main() {
    int age;
    int yexp;


    cout << "Enter your age: ";
    cin >> age;


    cout << "Enter your years of experience: ";
    cin >> yexp;


    if(age <= 18){
        if(yexp >= 2){
            
            cout << "You are eligible for a promotion";
        
        }else{
            
            cout << "You are not eligible for promotion";
        
        }
    }else{
        
        cout << "You are not eligible for promotion";
    }




    return 0;
}
