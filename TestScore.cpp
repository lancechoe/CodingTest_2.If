/*
Problem
Write a program that takes an exam score as input and prints the corresponding grade based on the following criteria:

A for scores 90 to 100
B for scores 80 to 89
C for scores 70 to 79
D for scores 60 to 69
F for all other scores
Input
The first line contains an integer representing the exam score. The score is an integer between 0 and 100, inclusive.

Output
Print the corresponding letter grade.
*/

#include <iostream>
using namespace std;

int main(){
    int score;

    cin >> score;

    if(90 <= score && score <= 100){
        cout << "A" << endl;
    }
    else if(80 <= score && score <= 89){
        cout << "B" << endl;
    }
    else if(70 <= score && score <= 79){
        cout << "C" << endl;
    }
    else if(60 <= score && score <= 69){
        cout << "D" << endl;
    }
    else{
        cout << "F" << endl;
    }
}