/*
Problem
KOI Electronics is developing an AI oven that makes delicious smoked duck roasts efficiently. The AI oven calculates the finishing time in minutes after the cooking process starts.
A digital clock on the front of the oven displays the current time and the time when the cooking will be completed.
Given the current time and the cooking duration in minutes, write a program that calculates the time when the cooking process will end.

Input
The first line contains two integers A and B representing the current time (hours and minutes).
0 ≤ A ≤ 23 (hours)
0 ≤ B ≤ 59 (minutes)
The second line contains an integer C representing the required cooking time in minutes.
0 ≤ C ≤ 1,000
Output
Print the time when the cooking process ends as two space-separated integers (hours and minutes).
If the time exceeds 23:59, the clock rolls over to 00:00 (24-hour format).
*/

#include <iostream>
using namespace std;

int main(){
    int h;
    int m;
    int c;

    cin >> h >> m >> c;

    int p = (m+c)/60;

    if(p != 0 && h+p >= 24){
        cout << (h+p-24) << " " << (m+c)-60*p << endl;
    }
    else if(p != 0 && h+p < 24){
        cout << h+p << " " << (m+c)-60*p << endl;
    }
    else if(p == 0){
        cout << h << " " << m+c << endl;
    }
    
}