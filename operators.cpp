#include <bits/stdc++.h>

using namespace std;

int main() {
    int i = 1;
    int n = 10,d,r = 10,x;

    d=n++;
    cout<<d<<endl;
    x=++n;
    cout<<x<<endl;
    d=++r;
    cout<<r<<endl;

        //1   //3
    i = i++ + ++i; //Here in post increment, first i  will be 1 for i++ and then will get added making it to for ++i so in ++i, it(2) will be added first to 1 and then will be assigned to ++i's 'i'.

    cout<<i<<endl;


    return 0;
}
