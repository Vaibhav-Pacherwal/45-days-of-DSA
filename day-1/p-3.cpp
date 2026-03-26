#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cout << "enter string:";
    cin >> str;

    unordered_map<char, int> freq;
    for(int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    cout << "frequency: " << endl;
    for(auto &pair : freq) {
        cout << pair.first << "->" << pair.second << endl;
    }

    cout << "non-repeating chars: " << endl;
    for(auto &pair : freq) {
        if(pair.second == 1) {
            cout << pair.first << " ";
        }
    }
    cout << "\n";

    cout << "is palindrome? " << endl;
    int left = 0;
    int right = str.length()-1;
    string str_backup = str;
    while(left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    if(str.compare(str_backup) == 0) {
        cout << " yes" << endl;
    } else {
        cout << " no" << endl;
    }

    return 0;
}