#include<iostream>
using namespace std;

int main(){

    int usage;
    string speed;
    string rec_plan;


    cout << "How many internet (GB) do you use in a month?: ";
    cin >> usage;

    cout << "What is your preferred speed (high, medium, low): ";
    cin >> speed;

    if(usage >= 100){
        speed = "high";
    }else if(usage >= 50){
        speed = "medium";
    }else{
        speed = "low";
    }


    if(speed == "high"){
        cout << "Recommended plan for you is: Premium";
    }else if(speed == "medium"){
        cout << "Recommended plan for you is: Standard";
    }else{
        cout << "Recommended plan for you is: Basic";
    }



    return 0;
}