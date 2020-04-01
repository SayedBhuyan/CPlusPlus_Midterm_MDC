/*
Author: Sayed Bhuyan
Exercise: 31
Description: Write a complete progam that using a for loop that prints the odd integers 11 through 121 inclusive, separated by spaces.
*/
#include <iostream>
using namespace std;

int main()
{
	for(int i = 11; i <= 121; i++) {
        if(i % 2) {
            cout << i << " ";
        }
    }

    return 0;
}