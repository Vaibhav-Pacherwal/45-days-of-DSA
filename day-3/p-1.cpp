#include <iostream>
using namespace std;

int main() {
    int vals[5] = {5, 15, 22, 1, -15};
    int n = sizeof(vals) / sizeof(vals[0]);

    int min_val = vals[0];
    int max_val = vals[0];
    for(int i = 1; i < n; i++) {
        if(vals[i] < min_val) min_val = vals[i];
        if(vals[i] > max_val) max_val = vals[i];
    }

    cout << "Max -> " << max_val << endl;
    cout << "Min -> " << min_val << endl;

    return 0;
}