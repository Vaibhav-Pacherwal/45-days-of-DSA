#include <iostream>
using namespace std;

bool isEven(int n) {
    return (n & 1) == 0;
}

int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    if(isEven(n)) {
        cout << "parity -> even" << endl;
    } else {
        cout << "parity -> odd" << endl;
    }

    return 0;
}