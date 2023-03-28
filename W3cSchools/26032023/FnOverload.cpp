#include <iostream>

using namespace std;

int PlusFn(int x, int y){
    return x + y;
}
double PlusFn(double x, double y){
    return x + y;
}
int main(){
    int myNum1 = PlusFn(10,12);
    double myNum2 = PlusFn(5.2,0.5);
    cout<<"Int: "<<myNum1<<"\n";
    cout<<"Double: "<<myNum2<<"\n";
    return 0;
}