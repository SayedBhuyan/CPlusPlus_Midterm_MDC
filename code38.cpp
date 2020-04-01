/*
Author: Sayed Bhuyan
Exercise: 38
Description: Given that two int variables, total and amount, have been declared, write a complete program using a loop that reads integers into amount and adds all the non-negative values into total. The loop terminates when a value less than 0 is read into amount. Don't forget to initialize total to 0. 
*/
#include <iostream>
using namespace std;

int main()
{
	int total = 0;
    int amount;

    while(1) {
        cout << "Enter amount: " << endl;
        cin >> amount;

        if(amount >= 0) {
            total = total + amount;
        } else {
            break;
        }
    }

    cout << "Total: " << total << endl;

    return 0;
}


