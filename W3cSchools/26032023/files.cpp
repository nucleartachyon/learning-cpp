#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string mytext;

    ofstream MyFile("name.txt");

    MyFile<<"files can be tricky, but fun enough";

    MyFile.close();

    ifstream readingFile("name.txt");

    while (getline(readingFile, mytext)){
        cout<<mytext;
    }
    readingFile.close();
}