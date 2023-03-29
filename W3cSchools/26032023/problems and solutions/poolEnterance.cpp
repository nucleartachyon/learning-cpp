/*
problem: Admission to the pool is free for children under 7 years of age.
         The given program takes age as an input.

        Complete the code to output "free" if the child's age is less than 7.
*/
#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter age: ";
    cin>>age;
    string out = (age<7)?"free":"Not Free";
    cout<<out;
}