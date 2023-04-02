/*
problem: You must set a PIN for your suitcase that contains 4 digits in the range of 0 to N.
Write a program to take the N number as input, generate 4 random numbers from the range and print them sequentially, without spaces.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(0);
    int range;
    cin>>range;
    int Pin[4];
    for(int i = 0;i < 4;i++){
        Pin[i] = 1 + (rand() % range);
    }
    cout<<Pin[0]<<Pin[1]<<Pin[2]<<Pin[3];
    return 0;
}