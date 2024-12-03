#include <iostream>
#include <string>
using namespace std;

int main() {
    
    cout<<sizeof(int)<<endl;// size of int is 4 bytes
    cout<<sizeof(long int)<<endl;// size of long int is 8 bytes [long gives extra 4 bytes]
    cout<<sizeof(long long)<<endl;// size of long long is 8 bytes [long long gives extra 4 bytes]
    cout<<sizeof(short int)<<endl;// size of short int is 2 bytes
    int a=10; // signed integer means it can hold both positive and negative values
    unsigned int b=10; // unsigned means positive number only
    return 0;
}