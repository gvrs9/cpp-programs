/*Program to check whether the given user is eligible for voting via if and else statements*/
#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int age;

	cin >> age;

	if (age >= 18)
	{

		cout << "You are eligible for voting" << endl;
	}
	else
	{
		cout << "You are not eligible for voting" << endl;
	}

	return 0;
}