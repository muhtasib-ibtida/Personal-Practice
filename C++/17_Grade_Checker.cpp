#include<iostream>
using namespace std;

int main(){

    int a;

    cout << "Enter your score: ";
    cin >> a;

    
    if(a >= 90){

        cout << "You got A+";
    }
    else if(a >= 85){

        cout << "You got A";
    }
    else if(a >= 80){

        cout << "You got B+";
    }
    else if(a >= 75){

        cout << "You got B";
    }
    else if(a >= 70){

        cout << "You got C+";
    }
    else if(a >= 65){

        cout << "You got C";
    }
    else if(a >= 60){

        cout << "You got D+";
    }
    else if(a >= 50){

        cout << "You got D";
    }
    else{

        cout << "You Failed";
    }


    return 0;
}