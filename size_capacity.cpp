#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>vec;

    vec.push_back(25);
    vec.push_back(30);
    vec.push_back(35);
    vec.push_back(40);
    vec.push_back(45);

    cout<<"size: "<< vec.size()<<endl; // size of vector 4
    cout<<"capacity: "<< vec.capacity()<<endl; // capacity of vector 2*size

    return 0;
}