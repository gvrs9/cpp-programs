/*Program to display multiplication table upto 10.*/
#include <iostream>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cout << "Enter A Positive Value\n";
	cin >> n; // We take an input from the user for printing his desired multiplication table upto 10

	for (int i = 1; i <= 10; i++)
	{													   // Here we keep i value as 10 as we are trying to print the multiplication table upto 10. We can increase it to whatever number we want
		cout << n << " * " << i << " = " << n * i << endl; //printing the table by multiplying n with i
	}

	return 0;
}
