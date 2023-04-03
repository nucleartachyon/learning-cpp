/*
problem: A local supermarket is running a promotion: each Nth customer will receive one item for free. 
Customers names are sequentially given as array of strings (see template).
Write a function that receives the array of customers, its size, and the N number as arguments, 
and prints the names of the lucky customers each in a new line.

*/

#include <iostream>
using namespace std;

void winners(string Customers[],int Size,int n,int luck){
     n--;
     for(int i =0;i<Size;i++){
        if(n>(Size-1)){
            break;
        }
        cout<<Customers[n]<<endl;
        n = n + luck;
     }
}
int main(){
    string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};
    int n;
    cin >> n;
    int luck = n;
    winners(customers, 13, n,luck);
}