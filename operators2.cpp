#include <bits/stdc++.h>

using namespace std;

int main() {

    int i=1;
    int j=2;
    int k;
      //3(i+j)  //1   //2   //3   //4
    k = i + j + i++ + j++ + ++i + ++j;

    cout<<i<<" "<<j<<" "<<k<<endl;

    return 0;
}
