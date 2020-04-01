/*
Author: Sayed Bhuyan
Exercise: 14
Description: Given an int variable k that has already been declared, use a while loop to print a single line consisting of 97 asterisks. Use no variables other than k.
*/
#include <iostream>
using namespace std;

int main()
{
	int k = 0;

    while (k < 97) {
        cout << "*";
        k++;
    }

    return 0;
}