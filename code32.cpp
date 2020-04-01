/*
Author: Sayed Bhuyan
Exercise: 32
Description: Write a for loop that prints in ascending order all the positive multiples of 5 that are less than 175, separated by spaces.
*/
#include <iostream>
using namespace std;

int main()
{
    
    for(int i = 1; i <= 175; i++) {
        cout << i * 5 << " ";
    }

    return 0;
}