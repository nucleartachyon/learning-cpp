#include <iostream>
using namespace std;

int main(){
    int time = 20;
    if(time<18){
        cout<<"Good Day.";
    }else{
        cout<<"Good Evening.";
    }
    //short hand fi statement
    string res = (time>18)?"good Day.":"Good Evening."; 
    return 0;
}