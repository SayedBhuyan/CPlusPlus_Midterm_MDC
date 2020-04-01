/*
Author: Sayed Bhuyan
Exercise: 22
Description: Assume that two int constants,FIRST_YEAR and LAST_YEAR have already been declared and initialized with year values (like 2009, 2014), along with a double variable oil that has been initialized with the number of barrels of oil consumed in Canada in the year given by FIRST_YEAR. Write a complete program that uses a while statement to print on a line by itself, each of the years from FIRST_YEARto LAST_YEAR inclusive. On each line, after the year, separated by a colon and a space, print the new value amount of oil, taking into account that each year the oil consumed increases by 20%.
*/
#include <iostream>
using namespace std;

int main()
{
	const int FIRST_YEAR = 2009;
    const int LAST_YEAR = 2014;
    double oil;
    
    cout << "What is the amount of consumed oil in " << FIRST_YEAR << "? "  << endl;
    cin >> oil;

    int year = FIRST_YEAR;
    while(year < LAST_YEAR) {

        cout << year << ": " << oil << endl;

        oil = oil + (oil * 0.20);

        year++;
    }

    return 0;
}