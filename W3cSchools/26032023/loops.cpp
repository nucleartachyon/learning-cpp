#include <iostream>
using namespace std;
int main(){
    int i = 0;
    //while
    while(i < 5){
        cout<<i<<"\n";
        i++;
    }
    //do while
    do {
        cout<<i<<"\n";
        i++;
    }
    while(i<5);
    //for loop
    for(int i = 0;i<=10;i++){
        cout<<i<<"\n";
    }
    //nested for loop
    for(int i = 1;i<=2;++i){
        cout<<"Outer: " << i << "\n";
        
        for(int j = 1;j<=3;++j){
            cout<<"Inner: "<<j<<"\n";
        }
    }
    //for-each loop
    int myNumbers[5] = {10,20,30,40,50};
    for(int i : myNumbers){
        cout<<i<<"\n";
    }
}
