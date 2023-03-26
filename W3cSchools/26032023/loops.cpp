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
}
