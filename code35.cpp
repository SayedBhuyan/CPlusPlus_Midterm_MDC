/*
Author: Sayed Bhuyan
Exercise: 35
Description: Write a complete progam using a for loop that prints, in ascending order, all the positive integers less than 200 that are divisible by both 2 and 3, separated by spaces.
*/
#include <iostream>
using namespace std;

int main()
{
	
    for(int i = 0; i < 200; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}