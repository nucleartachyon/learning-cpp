/*
porblem: You are on a 5 hour sea voyage. 
        The ship sails at a speed of 40 km per hour. 
        Write a program that will output how many kilometers the ship has traveled by each hour.
*/
#include <iostream>
using namespace std;

int main(){
   int dt = 0;
   for(int i = 5l;i>=0;i--){
        dt+=40;
        cout<<dt<<"\n";
   }
   return 0; 
}