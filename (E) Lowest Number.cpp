#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    int minIndex = 0;
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
        if(A[i] < A[minIndex])
        {
            minIndex = i;
        }
    }

    cout << A[minIndex] << " " << minIndex + 1 << endl;

    return(0);
}
