/*
problem: You operate a mobile provider running a promotion that multiplies a user's internet bandwidth.
        Fix the program by completing the function and calling it, so that the given megabyte outputs before and after the promotion work correctly.
        The multiplier is taken as input inside the multiplier function.

*/
#include <iostream>
using namespace std;

int promotion(int mb){
    int multiplier;
    cin>>multiplier;
    
    return mb = mb*multiplier;
}

int main(){
    int mb;
    cin>>mb;

    cout<<"before the promotion: "<<mb<<endl;

    mb = promotion(mb);

    cout<<"after the promotion: "<<mb<<endl;
}