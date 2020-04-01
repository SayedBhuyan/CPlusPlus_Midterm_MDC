/*
Author: Sayed Bhuyan
Exercise: 36
Description: Write a complete program that increments the value of the int variable total by the value of the int variable amount. That is, add the value of amount to total and assign the result to total.
*/


#include <iostream>
using namespace std;

int main()
{
	int amount = 0;
    int total = 0;

    cout << "Enter amount: " << endl;
    cin >> amount;

    cout << "Enter total: " << endl;
    cin >> total;


    total = amount + total;

    cout << "Current total is: " << total << endl;

    return 0;
}

