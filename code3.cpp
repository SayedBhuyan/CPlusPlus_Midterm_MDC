/*
Author: Sayed Bhuyan
Exercise: 03
Description: Write a complete program that evaluates to true if and only if the value of the integer variable x is equal to zero.
105613.Write a complete program that conditionally assigns 10,000 to the variable bonus if the value of the variable goodsSold is greater than 500,000.
*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    int bonus;
    int goodsSold;

    cout << "Enter X value: " << endl;
    cin >> x;

    if (x == 0) {
        cout << "True" << endl;
    }

    cout << "Enter the amount of good sold: " << endl;
    cin >> goodsSold;

    if(goodsSold > 500000) {
        bonus = 10000;
        cout << "Your bonus: " << bonus << endl;
    }

    return 0;
}