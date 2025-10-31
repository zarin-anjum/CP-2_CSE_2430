#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool seen[26] = {false};

    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
        seen[c - 'a'] = true;
    }

    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!seen[i]) {
            isPangram = false;
            break;
        }
    }

    if (isPangram) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

