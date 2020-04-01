/*
Author: Sayed Bhuyan
Exercise: 41
Description: Given an int variable n that has been initialized to a positive value and, in addition, int variables k and total that have already been declared, write a complete program using a for loop to compute the sum of the cubes of the first n whole numbers, and store this value in total. Thus if n equals 4, your code should put 1*1*1 + 2*2*2 + 3*3*3 + 4*4*4 into total. Use no variables other than n, k, and total.
*/
#include <iostream>
using namespace std;

int main()
{
	int n = 4;
    int total = 0;

    for(int k = 1; k <= n; k++){
        total += (k * k * k);
    }

    cout << "Total: " << total << endl;

    return 0;
}


