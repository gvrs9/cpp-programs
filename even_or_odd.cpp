#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
//freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
int x;
	cin >> x;
	if (x % 2 == 0)
	{
		cout << x << " Is an even number" << endl;
	}
	else
	{
		cout << x << " Is an odd number" << endl;
	}

	return 0;
}