#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "enter number:";
    cin >> num;

    if(num / 10 == 0) {
        cout << num << "\n";
    } else {
        string s = "";
        while(num != 0) {
            s.push_back((num % 10) + '0');
            num /= 10;
        }

        cout << "reversed num:" << stoi(s) << "\n";
    }

    return 0;
}