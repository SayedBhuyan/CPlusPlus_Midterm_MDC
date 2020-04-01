/*
Author: Sayed Bhuyan
Exercise: 43
Description: Given an int variable n that has been initialized to a positive value and, in addition, int variables k and total that have already been declared, write a complete program using a while loop to compute the sum of the cubes of the first n counting numbers, and store this value in total. Thus if n equals 4, your code should put 1*1*1 + 2*2*2 + 3*3*3 + 4*4*4 into total. Use no variables other than n, k, and total. Do NOT modify n.
*/
#include <iostream>
using namespace std;

int main()
{
	int n = 4;
    int total = 0;

    int k = 1;
    while(k <= n) {
        total += k*k*k;

        k++;
    }

    cout << "Total: " << total;

    return 0;
}