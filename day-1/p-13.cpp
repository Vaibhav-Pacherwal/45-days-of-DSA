#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    int s_count = 1;
    for(int i = 0; i < n; i++) {
        for(int j = n-1; j >= i; j--) {
            cout << " ";
        }

        for(int k = 0; k <= s_count-1; k++) {
            cout << "*";
        }

        s_count += 2;
        cout << endl;
    }

    return 0;
}