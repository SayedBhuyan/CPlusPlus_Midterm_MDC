/*
Author: Sayed Bhuyan
Exercise: 25
Description: Given an int variable n that has already been declared and initialized to a positive value, and another int variable j that has already been declared, write a complete program that uses a do...while loop to print a single line consisting of n asterisks. Thus if n contains 5, five asterisks will be printed. Use no variables other than n and j.
*/
#include <iostream>
using namespace std;

int main()
{
	int n = 5;
    
    int j = 1;
    do {

        cout << "*";
        
        j++;

    } while(j <= n);

    return 0;
}