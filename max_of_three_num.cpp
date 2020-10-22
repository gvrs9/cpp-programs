#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x, y, z;
	//cout << "X: ";
	cin >> x;
	// cout << endl;
	//cout << "Y: ";
	cin >> y;
	// cout << endl;
	//cout << "Z: ";
	cin >> z;
	if (x > y)
	{
		if (x > z)
		{
			cout << x << " Is greater than the other two" << endl;
		}
		else
		{
			cout << z << " Is greater than the other two" << endl;
		}
	}
	else
	{
		if (y > z)
		{
			cout << y << " Is greater than the other two" << endl;
		}
		else
		{
			cout << z << " Is greater than the other two" << endl;
		}
	}

	return 0;
}
