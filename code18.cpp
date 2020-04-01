/*
Author: Sayed Bhuyan
Exercise: 18
Description: Given a string variable s that has already been declared, write a complete program that repeatedly reads a value from standard input into s until at last a "Y" or "y"or "N" or "n" has been entered.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

    while(1) {

        cout << "Enter a character: " << endl;
        cin >> s;

        if ( s == "Y" || s == "y" || s == "N" || s == "n") {
            break;
        }

        cout << "You entered: " << s << endl << endl;

    }
    return 0;
}