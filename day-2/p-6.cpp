#include <iostream>
using namespace std;

int binToDec(int n) {
    int ans = 0, base = 1;
    while(n > 0) {
        int rem = n%10;
        ans += (rem * base);

        n /= 10;
        base *= 2;
    }

    return ans;
}

int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    cout << binToDec(n) << endl;

    return 0;
}