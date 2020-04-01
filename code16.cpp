/*
Author: Sayed Bhuyan
Exercise: 16
Description: Given an int variable n that has already been declared, write a complete program that repeatedly reads a value into n until at last a number between 1 and 10 (inclusive) has been entered.
*/
#include <iostream>
using namespace std;

int main()
{
	int n;

    while (1)
    {
        cout << "Enter a value " << endl;
        cin >> n;

        if ( n >= 1 && n <= 10) {
            break;
        }

        cout << "You entered: " << n << endl << endl;
    }
    

    return 0;
}