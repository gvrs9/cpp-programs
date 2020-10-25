/*Switch statements are replacement for long if else statements which help in comparing a variable against multiple values and where the match is found, that case will be executed*/

// Here we need to write a program in such a way that when we press a button, it should perform a specific block of case(i.e., say hello in different lang when different buttons are pressed(or input given by user)

#include <bits/stdc++.h>

using namespace std;

int main() {
    char button;
    cout<<"Input a character between a and e(small letters): ";
    cin>>button;

    switch (button){
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"Namaste"<<endl;
            break;
        case 'c':
            cout<<"Salut"<<endl;
            break;
        case 'd':
            cout<<"Hola"<<endl;
            break;
        case 'e':
            cout<<"Ciao"<<endl;
            break;

        default:
            cout<<"I am still Learning!"<<endl;
            break;
    }
    return 0;


}
