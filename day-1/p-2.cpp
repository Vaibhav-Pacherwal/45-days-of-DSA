#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Vaibhav";

    char ch;
    cout << "enter char: ";
    cin >> ch;

    int pos = str.find(ch);

    while (pos != string::npos) {
        cout << pos << " ";
        pos = str.find(ch, pos + 1);
    }

    return 0;
}