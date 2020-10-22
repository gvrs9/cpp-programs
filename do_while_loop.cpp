#include <iostream>
using namespace std;

int main() {

	int i = 1; //initialisation

	do { //do loop atleast executes once and then checks the condition
		cout << i << " ";
		i++;
	} while (i <= 5);


	return 0;
}