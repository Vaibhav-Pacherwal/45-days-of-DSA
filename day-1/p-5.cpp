#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

int main() {
    int num1;
    int num2;
    cout << "enter num1: ";
    cin >> num1;
    cout << "enter num2: ";
    cin >> num2;

    cout << "GCD -> " << gcd(num1, num2) << endl;

    return 0;
}