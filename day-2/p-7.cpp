#include <iostream>
using namespace std;

bool isPowOfTwo(int n) {
    return n > 0 && (n & (n-1)) == 0;
}

int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    if(isPowOfTwo(n)) {
        cout << "Is power of 2? yes" << endl;
    } else {
        cout << "Is power of 2? no" << endl;
    }

    return 0;
}