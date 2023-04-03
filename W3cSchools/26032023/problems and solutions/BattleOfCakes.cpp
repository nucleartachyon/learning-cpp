/*
problem: Pastry chefs are competing to win the battle of the cakes. 
        For each additional cake made, the number of eggs required increases by 1 (1 egg for the first cake, 2 eggs for the second, etc.).
        Take the number of cakes that must be baked as the input, 
        calculate (recursively) how many eggs were used to bake them by the end of the battle and output the result.

*/
#include <iostream>
using namespace std;

int recSum(int n){
    if(n == 1){
        return 1;
    }else{
        return n + recSum(n-1);
    }
} 

int main(){
    int n;
    cin>>n;
    cout<<recSum(n)<<endl;
    return 0;
}