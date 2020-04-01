/*
Author: Sayed Bhuyan
Exercise: 29
Description: Assume the int variables i, lo, hi, and result have been declared and that lo and hi have been initialized.Write a complete program using the for loop that adds the integers between lo and hi (inclusive), and stores the result in result.Your code should not change the values of lo and hi. Also, do not declare any additional variables -- use only i, lo, hi, and result.
*/
#include <iostream>
using namespace std;

int main()
{
    int lo = 10;
    int hi = 13;
    int result = 0;

    for(int i = lo; i <= hi; i++) {
        result += i;
    }

    cout << result;

    return 0;
}