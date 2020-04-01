/*
Author: Sayed Bhuyan
Exercise: 06
Description: Assume that the variables gpa, deansList and studentName, have been declared and initialized. Write a statement that both adds 1 to deansList and prints studentName to standard out if gpa exceeds 3.5.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int deansList = 0;
    string studentName = "John Doe";
    float gpa = 4.5;

  if(gpa > 3.5) {
        deansList++;
        cout << studentName << endl;
  }

    return 0;
}