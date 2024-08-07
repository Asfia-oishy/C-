#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int u = 0, d = 0, l = 0, r = 0;
        for (int i = 1; i <= n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x > 0)
                r = 1;
            if (x < 0)
                l = 1;
            if (y > 0)
                u = 1;
            if (y < 0)
                d = 1;
        }

        if (u + d + l + r < 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}