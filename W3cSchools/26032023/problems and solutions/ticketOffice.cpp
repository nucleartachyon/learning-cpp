/*
problems: You are working on a ticketing system. A ticket costs $10.
          The office is running a discount campaign: each group of 5 people is getting a discount, 
          which is determined by the age of the youngest person in the group.
          You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets.

*/
#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }

    int min = ages[0];
    for(int i=0; i<5; i++) {
        if(ages[i]<min)
            min = ages[i];
    }
    double discount = 50.0 - (50.0*double(min)/100.0);
    cout<<discount<<endl;
    return 0;
}