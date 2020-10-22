/*Program to find sum of natural numbers till n.*/
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int sum = 0; //initialising sum to 0

	for (int counter = 1; counter <= n; counter++) { //counter here starts from 1 and repeats the loop till the number n

		sum = sum + counter; // summation of sum and counter will be stored in the sum variable which we can display by cout.


	}

	cout << sum << endl;


	return 0;
}