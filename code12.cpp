/*
Author: Sayed Bhuyan
Exercise: 12
Description: Assume that grade is a variable whose value is a letter grade-- any one of the following letters: 'A', 'B', 'C', 'D', 'E', 'F', 'W', 'I'. Assume further that there are the following int variables, declared and already initialized: acount, bcount, ccount, dcount, ecount, fcount, wcount, icount. 

Write a complete program using a switch statement that increments the appropriate variable (acount, bcount, ccount, etc.) depending on the value of grade. So if grade is 'A' then acount is incremented; if grade is'B' then bcount is incremented, and so on.
*/
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char grade;

    int acount = 0;
    int bcount = 0;
    int ccount = 0;
    int dcount = 0;
    int ecount = 0;
    int fcount = 0;
    int wcount = 0;
    int icount = 0;

    cout << "Enter grade character: " << endl;
    cin >> grade;

    grade = toupper(grade); // converting lowercase characters to uppercase

    switch (grade)
    {
    case 'A':
        acount++;
        break;
    case 'B':
        bcount++;
        break;
    case 'C':
        ccount++;
        break;
    case 'D':
        dcount++;
        break;
    case 'E':
        ecount++;
        break;
    case 'F':
        fcount++;
        break;
    case 'W':
        wcount++;
        break;
    case 'I':
        icount++;
        break;
    
    default:
        cout << "Accepted characters: 'A', 'B', 'C', 'D', 'E', 'F', 'W', 'I'";
        break;
    }

    return 0;
}