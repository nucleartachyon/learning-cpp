#include <iostream>
using namespace std;

int SimCal(){
    int x,y;
    cout<<"enter first number: ";
    cin>>x;
    cout<<endl;
    cout<<"enter second number: ";
    cin>>y;
    cout<<endl;
    int sum = x+y;
    cout<<"your total sum is : "<<sum;
    return 0;
}
int main(){
    int x;
    cout<<"enter a number: ";
    cin>>x;
    cout<<"you just entered: "<<x<<endl;
    SimCal();
    return 0;
}