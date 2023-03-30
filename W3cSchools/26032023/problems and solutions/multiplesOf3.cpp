/*
problem: You are given a program that outputs all the numbers from 0 to 20.
Change the code to make it output only numbers that are multiples of 3.
*/
#include <iostream>
using namespace std;

int main(){
    int num = 0;
    while (num <= 20){
        //int rem = num % 3;
        //cout<<rem<<"\n";
        if(num == 0){
            num++;
            continue;
        }else{
            if (num % 3 == 0){
                cout << num << endl;    
            }
        }
        num+=1;
    }
    return 0;
}