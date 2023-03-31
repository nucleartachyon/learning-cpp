/*
problem: A coffee vending machine makes 5 types of coffee:
1 - Latte
2 - Americano
3 - Espresso
4 - Cappuccino
5 - Macchiato

Write a program that will take a number from the customer as input and serve the corresponding coffee type.


*/

#include <iostream>
using namespace std;

int main(){
    int type;
    string coffee[5] = { "Latte", "Americano", "Espresso", "Cappuccino", "macchiato"};

    cout<<"enter your favored coffee: ";
    cin>>type;
    switch(type){
        case 1:
            cout<<coffee[0];
            break;
        case 2:
            cout<<coffee[1];
            break;
        case 3:
            cout<<coffee[2];
            break;
        case 4:
            cout<<coffee[3];
            break;
        case 5:
            cout<<coffee[4];
            break;
    }
}