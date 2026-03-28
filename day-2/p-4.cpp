#include <iostream>
using namespace std;

int fact(int n) {
    int prod = 1;
    for(int i = 1; i <= n; i++) {
        prod *= i;
    }

    return prod;
}

int binomialCoefficient(int n, int r) {
    return fact(n)/(fact(r)*fact(n-r));
}

int main() {
    int n,r;
    cout << "enter n:";
    cin >> n;
    cout << "enter r:";
    cin >> r;

    cout << binomialCoefficient(n, r) << endl;

    return 0;
}