#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << max(abs(0 - arr[0]), 2*abs(x - arr[n-1])) << endl;
            continue;
        }
        int start = 0, diff = 0;
        for (int i = 0; i <= n; i++)
        {
            if (i == 0)
            {
                diff = arr[i];
            }
            else if (i == n)
            {
                diff = max(diff, 2 * (x - arr[i-1]));
            }
            else
            {
                diff = max(diff, (arr[i] - arr[i - 1]));
            }
        }
        cout << diff << endl;
    }
    return 0;
}