/*
Author: Sayed Bhuyan
Exercise: 37
Description: Given that two int variables, total and amount, have been declared, write a complete program using the sequence of statements that:• initializes total to 0• reads three values into amount, one at a time.After each value is read in to amount, it is added to the value in total (that is, total is incremented by the value in amount).


*/
#include <iostream>
using namespace std;

int main()
{
	int total = 0;
    int amount = 0;

    for(int i = 0; i < 3; i++) {
        cout << "Enter amount "<< i+1 <<": " << endl;
        cin >> amount;

        total = total + amount;
    }

    cout << "Total: " << total << endl;

    return 0;
}


