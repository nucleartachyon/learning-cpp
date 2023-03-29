/*
problem: you need to buy paint for the floor of a rectangular room.
the given program takes the room's length and width as input.

complete the program to calculate and output the area of the room
*/
#include <iostream>
using namespace std;

int main(){
    double len,br;
    cout<<"enter length of the room: ";
    cin>>len;
    cout<<"enter breadth of the room: ";
    cin>>br;
    double area = len*br;
    cout<<"area of the room is: "<<area<<endl;
    return 0;
}