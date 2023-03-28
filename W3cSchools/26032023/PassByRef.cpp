#include <iostream>

using namespace std;

void swapNums(int &x,int &y) {
    int z = x;
    x = y;
    y = z;
}

int main(){
 int fNum = 10;
 int sNum = 20;

 cout<<"before swap:"<<"\n";
 cout<<fNum<<" "<<sNum<<"\n";

 swapNums(fNum,sNum);
 cout<<"after swap: "<<"\n";
 cout<<fNum<<" "<<sNum<<"\n";
 return 0;
}