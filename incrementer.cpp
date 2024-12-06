#include<iostream>
using namespace std;

int main(){

    // int a,b;
    // a=10;
    // b=++a;
    // cout<<a<<" "<<b<<endl;

    // int a,b;
    // a=10;
    // b=a++;
    // cout<<a<<" "<<b<<endl;

    // int i=1;
    // i=i++ + ++i;
    // cout<<i<<endl;

    int i,j,k;
    i=1;
    j=2;
    k=i+j+i++ + j++ + ++i + ++j;
    cout<<"The value of k is "<<k<<endl;
    cout<<"The value of i "<<i<<endl;
    cout<<"The value of j is "<<j<<endl;

    return 0;
}