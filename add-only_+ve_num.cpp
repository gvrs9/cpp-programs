/*Program to add only positive numbers.*/
#include <iostream>
using namespace std;
int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	int number;
	int sum = 0;

	cout << "Enter a number: ";
	cin >> number;

	while (number >= 0)
	{

		sum += number; // or sum=sum+number both are same

		cout << "Enter a number: ";
		cin >> number;
	}

	cout << "\nThe sum is " << sum << endl;

	return 0;
}