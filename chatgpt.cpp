#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == i + 1 || j <= n - 1) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
