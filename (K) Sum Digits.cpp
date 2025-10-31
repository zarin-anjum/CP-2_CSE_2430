#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string A;
    cin >> A;

    int sum = 0;
    for (char c : A)
    {
        sum += c - '0';
    }

    cout << sum << endl;
    return 0;
}
