#include <iostream>
using namespace std;

bool ifSet(int n, int i) {
    return (n >> (i - 1)) & 1;
}

int main() {
    int n, i;
    cout << "enter n:";
    cin >> n;
    cout << "enter i:";
    cin >> i;

    if(ifSet(n, i)) {
        cout << i  << "th is a set bit." << endl;
    } else {
        cout << i  << "th is not a set bit." << endl;
    }

    return 0;
}