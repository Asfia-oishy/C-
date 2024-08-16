#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int need = (n * (n + 1)) / 2;
    if (need == m)
        cout << 0 << endl;
    else
    {
        bool f = false;
        if (m > need)
        {
            m = (m % need);
            if (m == 0)
            {
                cout << 0 << endl;
                f = true;
            }
        }
        if (!f)
        {
            for (int i = n - 1; i >= 1; i--)
            {
                sum = (i * (i + 1)) / 2;
                if (sum <= m)
                {
                    sum = m - sum;
                    cout << sum << endl;

                    break;
                }
            }
        }
    }

    return 0;
}