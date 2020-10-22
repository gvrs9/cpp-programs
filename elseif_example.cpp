#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x, y;
	cin >> x;
	cout << endl;
	cin >> y;
	if (x == y)
	{
		cout << "X and Y are equal" << endl;
	}
	else if (x > y)
	{
		cout << "X is greater than Y" << endl;
	}
	else
	{
		cout << "Y is greater than X" << endl;
	}

	return 0;
}