/*
problem: You are given an array of doubles of items in a store that have different prices (see template).
         Write a program that takes the "percent off" discount as input and outputs discounted item prices 
         on one line in the same sequence you are given, separated by a space (" ").
 
*/
#include <iostream>
using namespace std;

int main(){
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};
    int percentOf;
    cin>>percentOf;
    for(int i = 0;i< sizeof(items)/sizeof(double);i++){
        cout<<items[i]-items[i]*percentOf/100<<" ";
    }
    return 0;
}