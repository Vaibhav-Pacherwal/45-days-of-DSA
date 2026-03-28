#include <iostream>
using namespace std;

int countOne(int n) {
    int count = 0;

    while(n > 0) {
        if((n & 1) == 1) {
            count++;
        }
        n = n >> 1;
    }

    return count;
}

int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    cout << "set bits -> " << countOne(n) << endl;

    return 0;
}