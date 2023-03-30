/*
problem: Create a timer program that will take the number of seconds as input, output the remaining time and countdown to 0.
You need to output every number, including 0.
*/
#include <iostream>
using namespace std;

int main(){
    int t;
    cout<<"input time";
    cin>>t;
    while(t>=0){
        cout<<t<<endl;
        t--;
    }
}