#include <iostream>
using namespace std;

int linerSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
} 

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int target;
    cout << "enter target:";
    cin >> target;

    int idx = linerSearch(arr, n, target);
    if(idx >= 0) {
        cout << idx << endl;
    } else {
        cout << "target element not found!" << endl;
    }

    return 0;
}