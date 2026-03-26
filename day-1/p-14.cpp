#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    int s_count = (2*n)-1;
    for(int i = 0; i < n; i++) {
        for(int k = 0; k <= s_count-1; k++) {
            cout << "*";
        }
        cout << endl;

        for(int j = 0; j <= i; j++) {
            cout << " ";
        }

        s_count -= 2;
    }

    return 0;
}