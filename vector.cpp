// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int>vec={1,2,3,4,5};
//     // vector functions

//     cout<< "size: "<<vec.size()<<endl; // size of vector

//     vec.push_back(25); // add element at the end of vector
//     cout<< "size after push_back: "<<vec.size()<<endl;

//     vec.pop_back();
//     cout<< "size after pop_back: "<<vec.size()<<endl; // remove last element

//     cout<< vec.front()<<endl; // first element of vector
//     cout<< vec.back()<<endl; // last element of vector
//     cout<< vec.at(3)<<endl; // element at index 3

//     for(int val : vec){
//         cout<< val <<" ";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>vec(5,1);
    // for (int val : vec){
    //     cout<< val <<endl;
    // }
    cout<<vec[3];
    return 0;
}
