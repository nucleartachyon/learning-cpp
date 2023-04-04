/*
problem: A palindromic number is a number (such as 626) that remains the same when its digits are reversed.
        Write a function that returns true if a given number is a palindrome, and false, if it is not.
        Complete the given function, so that the code in main works and results in the expected output.
*/

#include <iostream>
using namespace std;

bool IsPalindrome(int x){
    int rem,revNum;
    while(x != 0){
        rem = x%10;
        revNum = revNum*10 + rem;
        x/=10;
    }
    if(x == revNum){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(IsPalindrome(n)){
        cout<<n<<" is a palidrome";
    }else{
        cout<<n<<" is not a palindrome";
    }
    return 0;
}