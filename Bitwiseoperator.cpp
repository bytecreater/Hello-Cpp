#include <iostream>
#include <string>
using namespace std;

int main() {

    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    // bitwise & operator act as logical AND (*)
    int c= a&b;
    cout<<"a & b = "<<c<<endl;

    // bitwise | operator act as logical OR (+)
    int d= a|b;
    cout<<"a | b = "<<d<<endl;;

    // bitwise ^ operator act as logical XOR 
    int e= a^b;
    cout<<"a ^ b = "<<e<<endl;

    // bitwise << leftshift operator move bits to left and fill 0 on right side
    // 4 << 2 = 16 [4=100] [100<<2=10000]
    int f= (4<<2);
    cout<<"4 << 2 = "<<f<<endl;

    // bitwise >> rightshift operator move bits to right and fill 0 on left side
    // 4 >> 2 = 16 [4=100] [100>>2=1]
    int g= (4>>2);
    cout<<"4 >> 2 = "<<g<<endl;
    return 0;
}