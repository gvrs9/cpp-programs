#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int side1, side2, side3;
	cout << "Please give the input of side lengths \n";
	cin >> side1 >> side2 >> side3;

	if (side1 == side2 && side2 == side3)
	{
		cout << "The triangle is Equilateral" << endl;
	}
	else if (side1 == side2 || side1 == side3 || side2 == side3)
	{
		cout << "The triangle is Isosceles" << endl;
	}
	else
	{
		cout << "The triangle is Scalene" << endl;
	}

	return 0;
}