#include <iostream>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
};
int main(){
    Car car1;
    car1.brand = "BMW";
    car1.model = "x1";
    car1.year = 1999;

    Car car2;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1969;

    cout<<car1.brand<<" "<<car1.brand<<" "<<car1.year<<endl;
    cout<<car2.brand<<" "<<car2.brand<<" "<<car2.year<<endl;
    return 0;
}