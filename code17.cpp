/*
Author: Sayed Bhuyan
Exercise: 17
Description: Given a char variable c that has already been declared, write a complete program that repeatedly reads a value from standard input into c until at last a 'Y' or 'y' or 'N' or 'n' has been entered.
*/
#include <iostream>
using namespace std;

int main()
{
	char c;

    while(1) {

        cout << "Enter a character: " << endl;
        cin >> c;

        if ( c == 'Y' || c == 'y' || c == 'N' || c == 'n') {
            break;
        }

        cout << "You entered: " << c << endl << endl;

    }

    return 0;
}