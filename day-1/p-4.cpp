#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter num:";
    cin >> num;

    int count = 0;
    while(num != 0) {
        count++;
        num /= 10;
    }
    cout << "digit count -> " << count << endl;

    return 0;
}