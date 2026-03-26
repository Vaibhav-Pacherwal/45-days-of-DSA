#include <iostream>
#include <string>
using namespace std;

bool isNumberPalindrome(int n) {
    if(n/10 == 0) {
        return true;
    } else {
        string str = to_string(n);
        int left = 0;
        int right = str.length()-1;
        while(left < right) {
            if(str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
    }

    return true;
}

int main() {
    int num;
    cout << "enter num:";
    cin >> num;

    if(isNumberPalindrome(num) == true) {
        cout << num << " -> Palindrome Number" << endl;
    } else {
        cout << num << " -> Not Palindrome Number" << endl;
    }

    return 0;
}