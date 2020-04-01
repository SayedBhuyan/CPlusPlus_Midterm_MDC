/*
Author: Sayed Bhuyan
Exercise: 08
Description: Write a complete program using an if/else statement that compares the variable age with 65, adds 1 to the variable seniorCitizens if age is greater than or equal to 65, and adds 1 to the variable nonSeniors otherwise.
*/
#include <iostream>
using namespace std;

int main()
{
    int age;
    int seniorCitizens;
    int nonSeniors;

    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "How many is senior citizen is there: ";
    cin >> seniorCitizens;

    cout << "How many non senior citizens is there: ";
    cin >> nonSeniors;

    if( age > 65 ) {
        seniorCitizens++;
        cout << "Current senior citizens: " << seniorCitizens;
    } else {
        nonSeniors++;
        cout << "Current non seniors: " << nonSeniors;
    }

    return 0;
}