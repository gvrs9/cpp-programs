/*We have to check whether a given number is prime or not*/

// Prime numbers are those which have factors of itself and just 1. Prime numbers example are 2,3,5,7,etc., And prime numbers start from 2.

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout<<"Enter a positive number: ";
    cin >> n;
    int i; // declaring i in global scope
    for (i = 2; i < n; i++) { // Here the loop will iterate till n-1 since i<n
        if(n%i==0){
            cout<<n<<" Is is Non Prime"<<endl;
            break;
        }
    }
    if(i==n){ // Here we kept i==n so to check whether this i came from the for loop above or not. if it is from for loop above(having i<n so cannot be equal to n that means it is not a prime number) means it has already verified the statements above and is not a prime number.
        cout<<n<<" Is a Prime Number"<<endl;
    }
    return 0;
}