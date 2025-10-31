#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long max_product = 0;

        for (int i = 0; i < n; i++) {
            long long prod = 1;
            for (int j = 0; j < n; j++) {
                if (i == j)
                    prod *= (a[j] + 1);
                else
                    prod *= a[j];
            }
            if (prod > max_product) max_product = prod;
        }

        cout << max_product << endl;
    }

    return 0;
}
