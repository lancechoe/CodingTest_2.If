/*
Problem
Write a program that determines whether a given year is a leap year. If the year is a leap year, print 1; otherwise, print 0.

A year is a leap year if:

It is divisible by 4 and not divisible by 100, or
It is divisible by 400.
For example:

The year 2012 is a leap year because it is divisible by 4 but not by 100.
The year 1900 is not a leap year because it is divisible by 100 but not by 400.
The year 2000 is a leap year because it is divisible by 400.
Input
The first line contains an integer Y (1 ≤ Y ≤ 4000), representing the year.

Output
Print 1 if the year is a leap year, otherwise print 0.
*/

#include <iostream>
using namespace std;

int main(){
    int year;

    cin >> year;

    if(year%4 == 0 && year%100 !=0 || year%400 == 0){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}