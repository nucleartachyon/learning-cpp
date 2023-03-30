/*
problem: To study at a university, you must score higher than or equal to 90 out of 100 points on an exam.
         The given program takes points as input.


Complete the code to output "pass" if the score is higher than or equal to 90, otherwise print "fail".
*/
#include <iostream>
using namespace std;

int main(){
    double pts;
    cout<<"enter scored points: ";
    cin>>pts;
    if(pts<=100){
        if(pts>=90){
            cout<<"pass";
        }else{
            cout<<"fail";
        }
    }else{
        cout<<"maximum score is 100";
    }
    return 0;
}