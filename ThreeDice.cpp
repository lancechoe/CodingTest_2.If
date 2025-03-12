/*
Problem
A game involves rolling three six-sided dice, and the prize money is awarded based on the following rules:

If all three dice show the same number, the prize is:

10,000 + (same number) × 1,000
If exactly two dice show the same number, the prize is:

1,000 + (same number) × 100
If all three dice show different numbers, the prize is:

(highest number) × 100
Input
A single line containing three integers, each between 1 and 6, representing the numbers rolled on the dice.

Output
Print the prize money according to the rules.
*/

#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    int big=a;

    if(a==b && b==c){
        cout << 1000*a + 10000 << endl;
    }
    else if(a==b){
        cout << 100*a + 1000 << endl;
    }
    else if(a==c){
        cout << 100*a + 1000 << endl;
    }
    else if(b==c){
        cout << 100*b + 1000 << endl;
    }
    else{
        if(b>big){
            big = b;
            if(c>big){
                big = c;
            }
        }
        else if(c>big){
            big = c;
        }
        cout << 100*big << endl;
    }
}