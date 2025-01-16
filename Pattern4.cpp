// draw the sqaure pattern
#include <iostream>
using namespace std;
int main() {
    int n=5;
    cout << "Enter the size of the square (n): ";
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            int layer = min(min(i, j), min(n-i-1, n-j-1));
            cout << n - layer << " "; 
        cout << endl;

    return 0;
}
