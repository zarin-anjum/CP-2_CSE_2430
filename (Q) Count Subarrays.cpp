#include <iostream>
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

        long long count = 0;
        int len = 1;

        for (int i = 1; i < N; i++)
        {
            if (A[i] >= A[i - 1])
            {
                len++;
            } else
            {
                count += (long long)len * (len + 1) / 2;
                len = 1;
            }
        }

        count += (long long)len * (len + 1) / 2;

        cout << count << endl;
    }

    return 0;
}
