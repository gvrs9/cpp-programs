#include <iostream>
using namespace std;
int main()
{

    int a;  //variable declaration
    a = 12; //initialisation

    cout << "Size of int " << sizeof(a) << endl; //tells us the size(memory allocated in bytes) of a.

    float b;
    cout << "Size of float " << sizeof(b) << endl; //tells us the size(memory allocated in bytes) of b.

    char c;
    cout << "Size of char " << sizeof(c) << endl; //tells us the size(memory allocated in bytes) of c.

    bool d;
    cout << "Size of bool " << sizeof(d) << endl; //tells us the size(memory allocated in bytes) of d.

    short int si; //short is the modifier
    long int li;  // long is also a modifier

    cout << "Size of short int " << sizeof(si) << endl; //tells us the size(memory allocated in bytes) of si.

    cout << "Size of long int " << sizeof(li) << endl; //tells us the size(memory allocated in bytes) of li.

    return 0;
}