/*To Find the maximum of three numbers using conditional statements*/

#include <iostream>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE //not a part of code, to beautify input and output
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    //code goes here

    int a, b, c; //variables declaration

    //input from user
    cout << "Please give the value of a:\n";
    cin >> a;
    cout << "\nPlease give the value of b:\n";
    cin >> b;
    cout << "\nPlease give the value of c:\n";
    cin >> c;
    cout << endl;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " Is the greatest among " << b << " and " << c << endl; //prints a. So a, is greater than b and c.
        }
        else
        {
            cout << c << " Is the greatest among " << a << " and " << b << endl; //prints c. As we know that a>b, so here when a is less than c, it prints c only as b is already less than a and b(since: a>b). Note: already we know that this block of code is only executed when it satisfies the above a>b condition.
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " Is the greatest among" << c << " and " << a << endl; //prints b. Since we know that this else block is being only executed when b>a and checking for whether b is greater than c or not.
        }
        else
        {
            cout << c << " Is the greatest among " << b << " and " << a << endl; //prints c. Since c is greater than b and greater than a i.e., c>b>a here.
        }
    }

    return 0;
}
