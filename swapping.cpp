#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,b;
    a=10 ;
    b=20 ;
    cout<< "a= "<<a<< endl;
    cout<< "b= "<<b<< endl;
    int x;
    x=a;
    a=b;
    b=x;
    cout<< "a= "<<a<< endl;
    cout<< "b= "<<b<<endl;
    return 0;
}