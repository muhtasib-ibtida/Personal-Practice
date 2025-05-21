#include<iostream>
using namespace std;

int main(){

    string puname = "kousik";
    int ppass = 5566;
    
    string uname;
    int pass;

    cout << "Enter your username: ";
    cin >> uname;

    cout << "Enter your password: ";
    cin >> pass;
    
    if(uname == puname && pass == ppass){

        cout << "Access granted";
    }
    else{

        cout<< "Access denied";
    }


    return 0;
}