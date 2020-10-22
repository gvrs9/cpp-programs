#include <iostream>
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

	int max, min;

	if (x > y)
	{
		max = x;
		min = y;
	}
	else
	{
		max = y;
		min = x;
	}

	cout << "Max is " << max << endl;
	cout << "Min is " << min << endl;

	return 0;
}