// Implement a simlpe calculator using Switch


#include <bits/stdc++.h>

using namespace std;

int main() {
    float n1,n2;
    cout<<"Input two numbers: ";
    cin>>n1>>n2;
    // converting floats n1 and n2 to int via Type Casting so that it won't give error in % operator case
    int N1 = (int)n1;
    int N2 = (int)n2;
    char op; // character operator
    cout<<"Input an operator: ";
    cin>>op;

    switch (op) {
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        case '%':
            cout<<N1%N2<<endl;
            break;

        default:
            cout<<"Enter another operator"<<endl;
            break;
    }
    return 0;
}