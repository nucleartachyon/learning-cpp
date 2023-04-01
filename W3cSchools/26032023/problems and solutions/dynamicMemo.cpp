/*
problem: The code provided calculates the largest element of the array nums and outputs it.
         Complete the code to declare the nums array and take the array elements as input.
         The array can be of any variable size, so the first input should be the size of the array, followed by its elements.

*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int j = 0;j<n;j++){
        cin>>nums[j];
    }
    int max = nums[0];
    for(int i=0; i<n; i++) {
        if(nums[i]>max)
            max = nums[i];
    }
    cout << max;

    return 0;
} 