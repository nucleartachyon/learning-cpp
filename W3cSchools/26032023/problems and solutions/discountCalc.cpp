/*
problem: A supermarket has launched a campaign offering a 15% discount on 3 items.
Write a program that takes the total price for every purchase as input and outputs the relevant discount.

*/
#include <iostream>
using namespace std;

int main(){
    int purchaseAmount = 0;
    double totalPrice;
    for(int i =0;i<3;i++){
        cin>>purchaseAmount;
        totalPrice = (double(purchaseAmount*15))/100;
        cout<<totalPrice<<endl;
    }
    return 0;
}