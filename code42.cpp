/*
Author: Sayed Bhuyan
Exercise: 42
Description: Given int variables k and total that have already been declared, write a complete program using  a while loop to compute the sum of the squares of the first 50 counting numbers, and store this value in total. Thus your code should put 1*1 + 2*2 + 3*3 +... + 49*49 + 50*50 into total. Use no variables other than k and total.
*/
#include <iostream>
using namespace std;

int main()
{
    int total = 0;

    int k = 1;
    while(k <= 50) {
        total += k * k;

        k++;
    }

    cout << "Total: " << total << endl;


    return 0;
}