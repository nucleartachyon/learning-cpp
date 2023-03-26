#include <iostream>
using namespace std;

int diSage(){
    int myAge = 19;
    cout<<"I am "<<myAge<<" years old"<<endl;
}

int addVar(){
    int x = 5;
    int y = 10;
    int sum = x+ y;
    cout<< sum;
}
int main(){
    int myNum = 8;
    cout<<myNum<<endl;
    double myFloatNum = 5;
    char myLetter = 'D';
    string myText = "hello";
    bool myboolean = true;
    diSage();
    addVar();
    return 0;
}