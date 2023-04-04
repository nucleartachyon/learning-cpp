/*
problem: Complete the given program. 
        Define a class Bird which has one public method called makeSound(). 
        That prints "chirp-chirp" when called.

*/
#include <iostream>
using namespace std;

class Bird{
    public:
        void makeSound(){
            cout<<"chirp-chirp";
        }
};

int main(){
    Bird b1;
    b1.makeSound();
    return 0;
}