/*
CPP Program to find whether a given number is odd or even
*/

#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE //not a part of code, to beautify input and output
    freopen("input1.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif
    //code goes here

    int num; //variable declaration
    cout << "Please give a positive integer:\n";
    cin >> num; //taking input from user and assigning the value to num or storing input in num
    cout << endl;

    if (num % 2 == 0)
    {
        cout << num << " Is an even number";
    }
    else
    {
        cout << num << " Is an odd number";
    }

    return 0;
}