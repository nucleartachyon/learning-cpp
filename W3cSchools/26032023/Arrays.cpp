#include <iostream>
using namespace std;

int main(){
    string cars[4] = {"volvo","BMW","Ford","Mazda"};
    cout<<cars[0];
    cars[0] = "Opel";
    cout<<sizeof(cars);
    
    int myNumbers[5] = {10,20,30,40,50}; 
    for(int i = 0; i<sizeof(myNumbers)/sizeof(int); i++){
        cout<<myNumbers[i]<<"\n";
    }
    return 0;
    //multi dim array

    string letters[2][4] = {
        {"A","B","C","D"},
        {"E","F","G","H"}
    };
    cout<<letters[0][1];
}