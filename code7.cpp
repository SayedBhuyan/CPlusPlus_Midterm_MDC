/*
Author: Sayed Bhuyan
Exercise: 07
Description: Write a complete program that assigns true to the variable fever if the variable temperature is greater than 98.6.
*/
#include <iostream>
using namespace std;

int main()
{
    bool fever;
    float temperature;

    cout << "Enter the temperature: " << endl;
    cin >> temperature;

    if( temperature > 98.6 ) {
        fever = true;
    }
    

    return 0;
}