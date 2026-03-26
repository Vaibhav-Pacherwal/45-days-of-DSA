#include <iostream>
using namespace std;

int fibo(int n) {
    int fTerm = 0;
    int sTerm = 1;

    int nTerm;
    for(int i = 2; i < n; i++) {
        nTerm = fTerm + sTerm;
        fTerm = sTerm;
        sTerm = nTerm;
    }

    return nTerm;
}

int main() {
    int num;
    cout << "enter num:";
    cin >> num;

    cout << "nth fibonacci term -> " << fibo(num) << endl;

    return 0;
}