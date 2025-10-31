#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[100000], t[100000];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    long long base_sum = 0;
    long long b[100000];

    for (int i = 0; i < n; i++) {
        if (t[i] == 1) {
            base_sum += a[i];
            b[i] = 0;
        } else {
            b[i] = a[i];
        }
    }

    long long current_sum = 0;
    for (int i = 0; i < k; i++) current_sum += b[i];

    long long max_extra = current_sum;

    for (int i = k; i < n; i++) {
        current_sum = current_sum - b[i - k] + b[i];
        if (current_sum > max_extra) max_extra = current_sum;
    }

    cout << base_sum + max_extra << endl;
    return 0;
}

