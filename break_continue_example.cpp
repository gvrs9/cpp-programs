/*A Person X is allowed to go out only on odd days(write code). The person X receives some amount of money(pocket money) per month and spends that money when ever she goes out. Each time she goes out, she spends 300. Also terminate the loop whenever her pocket money becomes 0*/

//* Continue is used to skip to the next iteration of the loop

//* Break statement is used to a loop
#include <bits/stdc++.h>

using namespace std;

int main() {
    int pocketMoney=3000;

    for(int date=1;date<=30;date++){ // for loop here is the counter that counts (date) and updates (date++)
        cout<<"Please Enter The Date: ";
        cin>>date;
        if(date%2==0){ // here if is for telling when the the date is even, first it will go to the continue!
            continue; // Here continue will skip the even iterations or simply continue to the next iteration other than even dates and will then go to the cout statement if the given condition in if statement is false i.e., it will go to cout only for odd dates.
        }
        if(pocketMoney==0){ // Whenever pocketMoney becomes 0, then executes this if block here and statements inside it
            break; // break here terminates the loop.
        }

        cout<<"Go Out Today!"<<endl;
        pocketMoney=pocketMoney-300;
    }

    return 0;
}

