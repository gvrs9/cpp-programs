// Cpp Program to print the sum till n numbers when user gives n as input
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0; // to store sum uptil n

    for (int counter = 1; counter <= n; counter++) //* here initialisation can be done inside or outside the loop
    //! In for loop we need to have a separate variable such as counter here to take care of the iterations.
    {
        /* code */
        sum = sum + counter;
    }
    cout << sum;
    return 0;
}
