/*
Author: Sayed Bhuyan
Exercise: 19
Description: Write a complete program that uses a loop that reads positive integers from standard input, printing out those values that are greater than 100, and that terminates when it reads an integer that is not positive. The values should be separated by single blank spaces. Declare any variables that are needed.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string values = "";

    while(1) {

        cout << endl << "Enter a value: " << endl;
        cin >> n;

        if (n > 100) {
            values  = values + to_string( n ) + " ";
        } else if(n >= 0) {
        
        } else {
            break;
        }

        cout << "Values that are greater than hundred: " << values << endl;
    }
	

    return 0;
}