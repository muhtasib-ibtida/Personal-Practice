#include<iostream>
using namespace std;

int main(){

    char vowel1 = 'a';
    char vowel2 = 'e';
    char vowel3 = 'i';
    char vowel4 = 'o';
    char vowel5 = 'u';
    char vowel6 = 'A';
    char vowel7 = 'E';
    char vowel8 = 'I';
    char vowel9 = 'O';
    char vowel10 = 'U';

    char input;

    cout << "Enter a single character: ";
    cin >> input;

    if(input == vowel1 || input == vowel2 || input == vowel3 || input == vowel4 || input == vowel5 || input == vowel6 || input == vowel7 || input == vowel8 || input == vowel9 || input == vowel10){

        cout << "Input character is a vowel";

    }
    else{

        cout << "Input character is a consonant";
    }


    return 0;
}