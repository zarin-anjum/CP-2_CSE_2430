#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool ok = s[a] == '-';
    for (int i = 0; i < s.size(); i++)
        if (i != a && !isdigit(s[i])) ok = false;
    cout << (ok ? "Yes" : "No");
}
