/*
We are given a loop where in we are printing numbers from 1 to 100. Our job here is to not print numbers which are divisible by three i.e., skip the numbers divisible by three and print rest all.
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int i = 0; i < 100; i++) {
        if(i%3==0){
            continue; // if i is divisible by 3, then skip number and print the next. This continues till i reaches 100
        }
        cout<<i<<endl;
    }
    return 0;
}
