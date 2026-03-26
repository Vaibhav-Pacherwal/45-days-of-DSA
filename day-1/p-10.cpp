#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout << "enter n:";
    cin >> n;
    cout << "enter m:";
    cin >> m;

    for(int i = 0; i < m; i++) {
        cout << "*";
    }
    cout << endl;

    for(int i = 0; i < n-2; i++) {
        for(int j = 0; j < m; j++) {
            if(j == 0 || j == m-1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for(int i = 0; i < m; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}