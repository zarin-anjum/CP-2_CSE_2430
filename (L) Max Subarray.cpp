#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++)
        {
            int max_value = A[i];
            for (int j = i; j < N; j++)
            {
                max_value = max(max_value, A[j]);
                cout << max_value << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
