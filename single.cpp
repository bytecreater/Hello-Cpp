#include <iostream>
#include <vector>
using namespace std;

// using array
// int main() {
//     int n=5;
//    int arr[n]={4,1,2,1,2};
//    int x=0;
//    for (int i=0; i<n; i++){
//     x=x^arr[i];
//    }
//    cout<<x;
//     return 0;
// }

// find the number which is not a twice in vactor
// using vectors
#include <iostream>
#include <string>
using namespace std;

int main() {
    vector<int>vec={4,2,1,2,1};
    int x=0;
    for (int val : vec){
        x=x^val;
    }
    cout<<x;
    return 0;
}