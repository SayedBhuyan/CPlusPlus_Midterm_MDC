/*
Author: Sayed Bhuyan
Exercise: 05
Description: Assume that isIsosceles is a bool variable, and that the variables isoCount, triangleCount, and polygonCount have all been declared and initialized. Write a complete program that adds 1 to each of these count variables (isoCount, triangleCount, and polygonCount) if isIsosceles is true.
*/
#include <iostream>
using namespace std;

int main()
{
    bool isIsosceles = true;
    int isoCount = 0;
    int triangleCount = 0;
    int polygonCount = 0;

    cout << "what is the iso Count: ";
    cin >> isoCount;

    cout << "what is the triangle count: ";
    cin >> triangleCount;

    cout << "what is the polygon count: ";
    cin >> polygonCount;


    if (isIsosceles == true) {
       isoCount++;
       triangleCount++;
       polygonCount++;

       cout << "UPDATED: isoCount: " << isoCount << ", triangleCount: "<< triangleCount << ", polygonCount: " << polygonCount << endl;
    }

    return 0;
}