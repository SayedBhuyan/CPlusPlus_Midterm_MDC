/*
Author: Sayed Bhuyan
Exercise: 02
Description: Given an int variable grossPay, write a complete program that evaluates to true if and only if the value of grossPay is less than 10,000.
*/
#include <iostream>
using namespace std;

int main()
{

    int grossPay;

    cout << "Enter gross pay amount: " << endl;
    cin >> grossPay;

    if(grossPay < 10000) {
        cout << "True" << endl;
    }


    return 0;
}