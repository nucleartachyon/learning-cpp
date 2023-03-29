/*
problem: write a program that takes body temperature in celsius  as input.
        if it is in range from 36.1 to 36.9 print "Ok",otherwise print "Not Ok".
*/
#include <iostream>
using namespace std;

int main(){
    double tempCel;
    cout<<"input your body temperature in celsius: ";
    cin>>tempCel;
    cout<<endl;
    if (tempCel>=36.1){
        cout<<"Ok\n";
    }else if(tempCel<=36.9){
        cout<<"Ok\n";
    }else{
        cout<<"Not Ok\n";
    }
     
}