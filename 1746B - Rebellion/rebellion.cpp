#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int cnt_1 = 0, cnt_0 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                cnt_0++;
            else
                cnt_1++;
        }
        if (cnt_1 == 0 || cnt_0 == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int L, R;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 0)
            {
                R = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                L = i;
                break;
            }
        }
        int ans = 0;
        while (L < R)
        {
            if (arr[L] == 1 and arr[R] == 0)
            {
                arr[R]++;
                arr[L]--;
                ans++;
            }
            else if (arr[L] == 0)
            {
                L++;
            }
            else if (arr[R] == 1)
            {
                R--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}