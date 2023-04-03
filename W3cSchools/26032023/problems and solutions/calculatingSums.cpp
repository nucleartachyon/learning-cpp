/*
problem: Complete the add() function so that it will calculate the sum of two numbers given as arguments.
        Overload it in order to do the same operation with double type values.
        The calls of the functions are already written.
*/

#include <iostream>
using namespace std;


int add(int x,int y) {
    
    return x + y;
}

double add(double x, double y) {
    return x + y;
}

int main() {
    
    //calling
    cout<<add(5,6)<<"\n";
    cout<<add(1.2, 6.5);
    
    return 0;
}