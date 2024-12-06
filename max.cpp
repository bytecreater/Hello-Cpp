#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<c;
        }
        else{
            cout<<a;
        }
    }
    else{
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
}