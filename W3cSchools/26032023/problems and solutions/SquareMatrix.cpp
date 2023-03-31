/*
problem: You are given a two-dimensional array with 3 rows and 3 columns -- 9 elements.
Here is the array:
string arr[3][3] = {
    {"Python", "JS", "C++"},
    {"PHP", "SQL", "Java"},
    {"C#", "Swift", "Kotlin"},
};
CPP
Task
Complete the code to output C++ .
*/

#include <iostream>
using namespace std;

int main(){
    string arr[3][3] = {
                        {"Python", "JS", "C++"},
                        {"PHP", "SQL", "Java"},
                        {"C#", "Swift", "Kotlin"},
    };
    cout<<arr[0][2];
}