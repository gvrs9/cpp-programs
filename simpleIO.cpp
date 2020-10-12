#include <iostream>
using namespace std;
int main()
{

    int amount1;
    cout << "Please give the value of amount1 ";
    cin >> amount1;

    int amount2;
    cout << "Please give the value of amount1 ";
    cin >> amount2;

    int sum = amount1 + amount2;
    cout << "sum\n"; //Doesn't give sum value. Instead prints sum as in alphabets as it is inside the quotes which makes it a string

    cout << sum << endl; //Now this prints the value of sum.

    return 0;
}