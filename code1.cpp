/*
Author: Sayed Bhuyan
Exercise: 01
Description: Write a complete program that evaluates to true if and only if the integer x is greater than the integer y.
*/

#include <iostream>
using namespace std;

int main()
{

    int x;
    int y;

    cout << "Enter first number: " << endl;
    cin >> x;

    cout << "Enter second number: " << endl;
    cin >> y;

    if( x > y) {
        cout << "True" << endl;
    }

    return 0;
}