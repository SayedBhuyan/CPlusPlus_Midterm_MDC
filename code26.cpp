/*
Author: Sayed Bhuyan
Exercise: 26
Description: Given an int variable k that has already been declared, write a complete program that uses a for loop to print a single line consisting of 97 asterisks. Use no variables other than k.
*/
#include <iostream>
using namespace std;

int main()
{
    for(int k = 1; k <= 97; k++) {
        cout << "*";
    }

    return 0;
}