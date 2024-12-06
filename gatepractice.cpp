#include <iostream>
#include <string>
using namespace std;

int main() {
    int n=5;
    int arr[n];
    cout<<"Enter elememts of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool Notmatch=true;
    for(int i=0; i<n; i++){
        if (arr[i]==i){
            cout<<i<<endl;
            Notmatch=false;
        }
 
    }
    if (Notmatch==true){
        cout<<"Element not found";
    }
    return 0;
}