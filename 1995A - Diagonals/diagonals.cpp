#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, cnt = 0;
        cin >> n >> k;
        int diag = 2 * n - 1;
        if (k <= n)
        {
            if (k == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
            continue;
        }
        k = k - n;
        cnt++;
        n--;
        while (k > 0)
        {
            if (k > n)
            {

                k -= (2 * n);
                cnt += 2;
                n--;
            }
            else
            {
                k = 0;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}