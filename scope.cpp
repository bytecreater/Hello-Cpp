#include <iostream>
#include <string>
using namespace std;

int z=30; // global variable

void fun(){
    cout << "Hello, World!" << endl;
    cout<<z; // accessing global variable
    cout<< x << endl; // Error: 'x' was not declared in this scope
}
int main() {
    int x=10; 
    fun();
    
    cout<<z; // accessing global variable

    for (int i = 0; i < 3; i++) {
        int y=i; // y is local to the for loop
        cout << x << endl; // we can acess x here 
        cout<<z; // we can acess z here
    }
    cout<<y; // y is not accessible here
    return 0;
}