/*
Author: Sayed Bhuyan
Exercise: 10
Description: Write an if/else statement that assigns true to the variable fever if the variable temperature is greater than 98.6; otherwise it assigns false to fever.
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
    } else {
        fever = false;
    }
    

    
    return 0;
}