#include <iostream>
using namespace std;

int print_fibo_series(int n) {
    int fTerm = 0;
    int sTerm = 1;
    cout << fTerm << " " << sTerm << " ";

    int nTerm;
    for(int i = 2; i < n; i++) {
        nTerm = fTerm + sTerm;
        cout << nTerm << " ";
        fTerm = sTerm;
        sTerm = nTerm;
    }
    cout << endl;

    return 0;
}

int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    print_fibo_series(n);

    return 0;
}