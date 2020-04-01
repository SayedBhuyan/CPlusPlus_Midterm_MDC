/*
Author: Sayed Bhuyan
Exercise: 11
Description: Given the variables temperature and humidity, write a complete program that evaluates to true if and only if the temperature is greater than 90 and the humidity is less than 10.
*/
#include <iostream>
using namespace std;

int main()
{
    float humidity;
    float temperature;
	
    cout << "What is the humidity? " << endl;
    cin>> humidity;

    cout << "What is the temperature? " << endl;    
    cin>> temperature;

    if(temperature > 90 && humidity < 10) {
        cout << "True" << endl;
    }

    

    return 0;
}