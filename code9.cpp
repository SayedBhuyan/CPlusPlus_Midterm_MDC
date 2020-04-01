/*
Author: Sayed Bhuyan
Exercise: 09
Description: Write a complete program using an if/else statement that compares the value of the variables soldYesterday and soldToday, and based upon that comparison assigns salesTrend the value -1 or 1.
-1 represents the case where soldYesterday is greater than soldToday; 1 represents the case where soldYesterday is not greaterthan soldToday.


*/
#include <iostream>
using namespace std;

int main()
{
    int soldYesterday;
    int soldToday;
    int salesTrend;

    cout << "How many sold yesterday?" << endl;
    cin >> soldYesterday;

    cout << "How many sold today?" << endl;
    cin >> soldToday;

    cout << "What is the sales trend?" << endl;
    cin >> salesTrend;

    if(soldYesterday > soldToday) {
        salesTrend--;
    } else if(soldToday > soldYesterday) {
        salesTrend++;
    }

    cout << "Current sales trend is: " << salesTrend << endl;
    

    return 0;
}