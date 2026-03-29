#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                continue;
            }
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    intersection(arr1, arr2, m, n);

    return 0;
}