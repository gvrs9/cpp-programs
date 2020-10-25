/*Print all prime numbers between a and b*/

//* Now we will use nested for loop here. One loop will tell us whether the number is prime or not(this loop will come after the 1st loop) and other is for running the program for num btw a and b(this loop will come first).

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    for (int num = a; num <= b; num++) {
        int i;
        for (i = 2; i < num; i++) {
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }



    return 0;
}