/*
Author: Sayed Bhuyan
Exercise: 45
Description: Write a loop that reads positive integers from standard input, printing out those values that are even, separating them with spaces, and that terminates when it reads an integer that is not positive. Declare any variables that are needed.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num = 0;
    string numString = "";

	while(1) {
        cout << "Enter a number: " << endl;
        cin >> num;

        if (num >= 0) {
            numString += to_string ( num ) + " ";
        } else {
            break;
        }

        cout << "Updated: " << numString << endl << endl;
    }

    return 0;
}