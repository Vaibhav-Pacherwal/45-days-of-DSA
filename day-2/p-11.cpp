#include <iostream>
using namespace std;

int turnOn(int n, int i) {
    if((n >> (i-1) & 1) == 1) {
        return n;
    }

     int ans = (1 << (i-1)) | n;
     return ans;

}

int main() {
    int n, i;
    cout << "enter n:";
    cin >> n;
    cout << "enter i:";
    cin >> i;

    cout << turnOn(n, i) << endl;

    return 0;
}