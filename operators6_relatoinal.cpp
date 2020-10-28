/*Input a number n and tell whether it is equal to , less than or more than 10*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n>10){
        cout<<"More Than 10"<<endl;
    }else if(n<10){
        cout<<"Less Than 10"<<endl;
    }else{
        cout<<"Equal to 10"<<endl;
    }

    return 0;
}
