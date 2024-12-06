#include<iostream>
using namespace std;

int main(){
    int saving;
    cout<<"Enter your saving amount : ";
    cin>>saving;
    cout<<"Your amount : "<<saving<<endl;
    if(saving>500){
        if(saving>1000){
            cout<<"I will watch a movie in theatre.";
        }
        else{
            cout<<"I will buy a Comic book. ";
        }
    }
    else{
        cout<<"I will buy maggi and watch tmkoc.";
    }
    return 0;
}