#include <iostream>
using namespace std;

int main() {
    int age;
    char student;


    cout << "Enter your age: ";
    cin >> age;


    cout << "Your student status (Y/N): ";
    cin >> student;


    if(age < 18){

        cout << "You've got a discount for your age (Under 18)" << endl;
        cout << "Your membership fee is: 1000 TK";
    

    }else{
        if(student == 'Y'){

            cout << "You've got a discount as you're a student" << endl;
            cout << "Your membership fee is: 1000 Tk";
        }else{

            cout << "You've got no discount" << endl;
            cout << "Your membership fee is: 5000 TK";
        }
    }







    return 0;
}
