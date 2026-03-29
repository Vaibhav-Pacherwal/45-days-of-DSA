#include <iostream>
using namespace std;

void reverseArr(int arr[], int n) {
    int left = 0, right = n-1;
    while(left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array -> ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    reverseArr(arr, n);
    cout << "Reversed Array -> ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}