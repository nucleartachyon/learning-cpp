/*
problem: The given program defines a Painting class and creates an object using the constructor.
Fix the code so that the constructor takes the name as the argument and outputs it.
*/

#include <iostream>
#include <string>
using namespace std;

class Painting {
    public:
    string n;
        Painting(string name){
            n = name;
            cout<<n;
        }
        
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);

    return 0;
}