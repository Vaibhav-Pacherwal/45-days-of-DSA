#include <iostream>
using namespace std;

int toggleBit(int n, int i) {
    n = n ^ (1 << (i-1));
    return n;
}

int main() {
    int n, i;
    cout << "enter n:";
    cin >> n;
    cout << "enter i:";
    cin >> i;

    cout << toggleBit(n, i) << endl;

    return 0;
}