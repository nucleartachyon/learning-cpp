/*
problem: You are building an Hours to Minutes converter.
         Complete the given function so that it will take from user the count of hours as an argument, convert them into minutes, and output.

*/

#include <iostream>
using namespace std;

int toMinutes(int hours) {
    return hours * 60;
}
int main(){
    int Hrs;
    cin>>Hrs;
    cout<<toMinutes(Hrs);
    return 0;
}