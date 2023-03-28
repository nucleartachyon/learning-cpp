#include <iostream>
using namespace std;

void myFn(){
    cout<<"i just got executed \n";
}

void MultiParam(string fName, int age){
    cout<<"your name is "<<fName<<" and "<<" your age is "<<age<<"\n";
}

int main(){
    myFn();
    string fName = "Aryan";
    int age = 19;
    MultiParam(fName,age);
    MultiParam("harsh",19);
    return 0;
}