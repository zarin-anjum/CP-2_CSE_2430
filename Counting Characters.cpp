#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upper[26] = {0};
    int lower[26] = {0};

    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            upper[c - 'A']++;
        } else if (c >= 'a' && c <= 'z') {
            lower[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (upper[i] > 0) {
            cout << char('A' + i) << " " << upper[i] << endl;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (lower[i] > 0) {
            cout << char('a' + i) << " " << lower[i] << endl;
        }
    }

    return 0;
}
