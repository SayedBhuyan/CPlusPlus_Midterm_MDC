/*
Author: Sayed Bhuyan
Exercise: 34
Description: Write a complete program using a for loop that prints all the even integers from 80 through 20 inclusive, separated by spaces.
*/
#include <iostream>
using namespace std;

int main()
{
	for(int i = 80; i >= 20; i -= 2) {
        cout << i << " ";
    }

    return 0;
}