#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b;
    cin>>d;
 switch (d)
 {
 case 1:
    c=a+b;
    cout<<c;
    break;
case 2 :
    c=a-b;
    cout<<c;
    break;
 default:
 cout<<"hi guy";
    break;
 }
    return 0;   
}