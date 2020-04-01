/*
Author: Sayed Bhuyan
Exercise: 24
Description: Given an int variable k that has already been declared, write a complete program using a do...while loop to print a single line consisting of 97 asterisks. Use no variables other than k.
*/
#include <iostream>
using namespace std;

int main()
{
    int k = 1;

    do {
        cout << "*";
        k++;
    } while(k <= 97);

    return 0;
}