/*
Author: Sayed Bhuyan
Exercise: 39
Description: Write a complete program using a for loop that computes the following sum: 5+10+15+20+...+485+490+495+500. The sum should be placed in a variable sum that has already been declared and initialized to 0. In addition, there is another variable, num that has also been declared. You must not use any other variables.
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 0;

	for(int sum = 0; sum <= 500; sum+=5) {

        num = num + sum;

    }
       
    cout << endl << "Total: " << num << endl;

    return 0;
}


