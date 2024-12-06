// #include<iostream>
// using namespace std;

// int main(){
//     int n,i,sum=0;
//     cout<<"Enter the limit for sum: ";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         sum=sum+i;
//     }
// cout<<sum;
//     return 0;   
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;
    while(n>0){
        n=n/2;
    }
cout<<n;
    return 0;   
}