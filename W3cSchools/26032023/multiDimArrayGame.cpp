#include <iostream>
using namespace std;
int main(){
    bool ships[4][4] = {
        {0,1,1,0},
        {0,0,0,0},
        {0,0,1,0},
        {0,0,1,0}
    };

    int hits = 0;
    int numberOfTurns = 0;

    while(hits<4){
        int row,column;
        cout<<"selecting coordinates\n";
        cout<<"choose a row between 0 and 3: ";
        cin>>row;

        cout<<"choose a column between 0 and 3: ";
        cin>>column;

        if(ships[row][column]){
            ships[row][column] = 0;
            hits++;
            cout<<"hit!"<<(4-hits)<<"left.\n\n";
        }else{
            cout<<"Miss\n\n";
        }
        numberOfTurns++;
    }
    cout<<"Victory!\n";
    cout<<"You won in "<<numberOfTurns<<"turns";
}