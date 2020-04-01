/*
Author: Sayed Bhuyan
Exercise: 21
Description: Given an integer variable timer, write a complete program that uses the auto-decrement operator to decrease the value of that variable by 1.

*/
#include <iostream>
using namespace std;

int main()
{
	int timer = 0;
    cout << "Enter current timer: " << endl;
    cin >> timer;

    timer--;

    cout << timer;

    return 0;
}