#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while(n > 0) {
        int digit = n%10;
        sum += digit;
        n /= 10;
    }

    return sum;
}

int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    cout << digitSum(n) << endl;

    return 0;
}