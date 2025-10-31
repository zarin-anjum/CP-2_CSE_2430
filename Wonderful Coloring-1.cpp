#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        vector<int> letterCount(26, 0);

        for (char ch : str) {
            letterCount[ch - 'a']++;
        }
        int pairs = 0, singles = 0;
        for (int c : letterCount) {
            if (c >= 2) pairs++;
            else if (c == 1) singles++;
        }

        int k = pairs + (singles / 2);
        cout << k << endl;
    }

    return 0;
}
