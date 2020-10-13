/*Program to decide with whom should I go out according to my current savings*/

#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE //not a part of code, to beautify input and output
    freopen("input1.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
#endif

    int savings;
    cin >> savings;

    if (savings > 5000)
    {
        // cout << "Piyanka\n";
        if (savings > 10000)
        {
            cout << "Roadtrip with Piyanka\n";
        }
        else
        {
            cout << "Date with Piyanka\n";
        }
    }
    else if (savings > 2000)
    {
        cout << "Movie with Sharanya\n";
    }
    else
    {
        cout << "Friends\n";
    }

    return 0;
}