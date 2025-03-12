/*
Given two integers, A and B, write a program that compares them and prints one of the following:

Print '>' if A is greater than B.
Print '<' if A is less than B.
Print '==' if A is equal to B.
*/

#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cin >> a >> b;

    if(a>b){
        cout << ">" << endl;
    }
    else if(a<b){
        cout << "<" << endl;
    }
    else{
        cout << "==" << endl;
    }
}