/*Write a program to find whether an alphabet is a vowel or a consonant.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    cout << "Enter an Alphabet: ";
    cin >> c;

    switch(c) {
        case 'a':
            cout<<"It is a vowel"<<endl;
            break;
        case 'e':
            cout<<"It is a vowel"<<endl;
            break;
        case 'i':
            cout<<"It is a vowel"<<endl;
            break;
        case 'o':
            cout<<"It is a vowel"<<endl;
            break;
        case 'u':
            cout<<"It is a vowel"<<endl;
            break;

        default:
            cout<<"It is a consonant"<<endl;
            break;
    }

    return 0;
}