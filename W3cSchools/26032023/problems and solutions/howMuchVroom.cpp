/*
problem: You are a supercar engineer and currently setting the engine's horsepower.
        Complete the given program by completing methods to set and get the horsepower of the car object in order to output it.
        The program should warn "Too much" if the inputted horsepower is above 800.
*/

#include <iostream>
using namespace std;

class Car{
    
    private:
        int horsepowers;

    public:
        void setHorsepowers(int Hp) {
            horsepowers = Hp;
        }
    
        int getHorsepowers() {
            return horsepowers;
        }
        

};


int main() {
    int horsepowers;
    cin>>horsepowers;
    if(horsepowers>=800){
        cout<<"Too much\n";
    }
   
    Car car;
    //setting the value for private member
    car.setHorsepowers(horsepowers);
    //printing the value of private member
    cout << car.getHorsepowers();

    return 0;
}