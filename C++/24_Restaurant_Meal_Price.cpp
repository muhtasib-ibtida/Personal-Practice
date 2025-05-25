#include <iostream>
using namespace std;

int main(){
    
    string meal;
    char beverage;
    int mealp;
    int total;
    int beveragep = 30;

    cout << "Enter the type of meal you want (breakfast, lunch, dinner): ";
    cin >> meal;


    if (meal == "breakfast"){
        mealp = 5.0;
    }else if (meal == "lunch"){
        mealp = 10.0;
    }else if (meal == "dinner"){
        mealp = 15.0;
    }else {
        cout << "Invalid meal type.";
    }


    cout << "Do you want a beverage? (Y/N): ";
    cin >> beverage;


    if (beverage == 'Y'){
        total = mealp + beveragep;
    } else {
        total = mealp;
    }

    cout << "The total price is: " << total;

    return 0;
}
