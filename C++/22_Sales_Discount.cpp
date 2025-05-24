#include <iostream>
using namespace std;

int main(){
    
    double aspent, famount;
    int discount;


    cout << "Enter the amount spent: ";
    cin >> aspent;


    if(aspent < 100){
       discount = 1; 
    }else if(aspent <= 500){
        discount = 2; 
    }else{
        discount = 3; 
    }

    switch (discount) {
        case 1:
         famount = aspent;
            break;
        case 2:
         famount = aspent * 0.9; 
            break;
        case 3:
         famount = aspent * 0.8; 
            break;
        default:
            cout << "Invalid input.";
            break;
    }

    cout << "The final amount to be paid is: TK" << famount << endl;







    return 0;
}
