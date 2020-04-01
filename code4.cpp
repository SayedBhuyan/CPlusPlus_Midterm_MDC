/*
Author: Sayed Bhuyan
Exercise: 04
Description: Write a complete program that conditionally decreases the variable shelfLife by 4 if the variable outsideTemperature is greater than 90.


*/
#include <iostream>
using namespace std;

int main()
{
    float outsideTemperature;
   float shelfLife;

   cout << "What is the outside temperature? " << endl;
   cin >> outsideTemperature;

   cout << "What is the shelf life? " << endl;
   cin >> shelfLife;

   if ( outsideTemperature > 90) {
       shelfLife = shelfLife - 4;
   } 
   cout << "current shelf life is: " << shelfLife << endl;
    

    return 0;
}