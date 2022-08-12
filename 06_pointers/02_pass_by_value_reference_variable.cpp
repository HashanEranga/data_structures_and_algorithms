#include <iostream>
using namespace std;

void applyIncomeTax(int income){
    float tax = .1;
    income = (1-tax)*income;
    // print the value of the income
    cout << "value of income in the function : " << income << endl;  
}

void applyIncomeTaxUsingPassByReferenceVariable(int &income){
    float tax = .1;
    income = (1-tax)*income;
    // print the value of the income
    cout << "value of income in the function : " << income << endl;  
}

int main(){

    int income;
    cin >> income;

    cout << "Input value of income : " << income << endl;

    applyIncomeTax(income);
    

    // this value is not increment because the function will create another variable named income and only that will be increased 
    cout << "Income after apply the tax : " << income << endl;

    applyIncomeTaxUsingPassByReferenceVariable(income);
    cout << "Income after apply the tax (using pass by reference variable) : " << income << endl;


    return 0;
}