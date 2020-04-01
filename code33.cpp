/*
Author: Sayed Bhuyan
Exercise: 33
Description: Given an int variable count that has already been declared, write a complete program using a for loop that prints the integers 50 through 1, separated by spaces. Use no variables other than count.
*/
#include <iostream>
using namespace std;

int main()
{
	int count;

    for(int i = 50; i >= 1; i--) {
        cout << i << " ";
    }
    

    return 0;
}