#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    int s_count = 1;
    for(int i = n; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        for(int k = 0; k < s_count; k++) {
            cout << "*";
        }

        s_count += 2;
        cout << endl;
    }

    s_count = (2*n)-3;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i+1; j++) {
            cout << " ";
        }

        for(int k = 0; k < s_count; k++) {
            cout << "*";
        }

        s_count -= 2;
        cout << endl;
    }

    return 0;
}