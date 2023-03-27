#include <iostream>
using namespace std;

struct car {
        string Brand;
        string Model;
        int Year;
};

int main(){
    car mycar1;
    mycar1.Brand = "BMW";
    mycar1.Model = "X5";
    mycar1.Year = 1999;

    car mycar2;
    mycar2.Brand = "ford";
    mycar2.Model = "Mustang";
    mycar2.Year = 1969;

    cout<<mycar1.Brand<<" "<<mycar1.Model<<" "<<mycar1.Year<<endl;
    cout<<mycar2.Brand<<" "<<mycar2.Model<<" "<<mycar2.Year<<endl;
    return 0;
}