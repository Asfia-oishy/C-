#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans[m];
    if (n % m == 0)
    {
        int val = n / m;
        while (m--)
        {
            if (m == 0)
                cout << val << endl;
            else
                cout << val << " ";
        }
    }
    else
    {
        int val = n / m;
        for (int i = 0; i < m; i++)
        {
            ans[i] = val;
        }
        int mod = n % m;
        int c = 0;
        for (int i = m - 1;; i--)
        {
            ans[i] += 1;
            c++;
            if (c == mod)
                break;
        }
        for (int i = 0; i < m; i++)
        {
            cout << ans[i];
            if (i == m - 1)
                cout << endl;
            else
                cout << " ";
        }
    }
    return 0;
}