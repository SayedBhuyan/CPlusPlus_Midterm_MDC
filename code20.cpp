/*
Author: Sayed Bhuyan
Exercise: 20
Description: Given an integer variable strawsOnCamel, write a complete program that uses the auto-increment operator to increase the value of that variable by 1.
*/
#include <iostream>
using namespace std;

int main()
{
	int strawsOnCamel = 0;
    cout << "Enter straws on camel: " << endl;
    cin >> strawsOnCamel;

    strawsOnCamel++;

    cout << strawsOnCamel;

    return 0;
}