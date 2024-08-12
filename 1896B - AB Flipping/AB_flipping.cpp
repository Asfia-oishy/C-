#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int pta = n, ptb = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'A')
            {
                pta = min(i, pta);
            }
            if (s[i] == 'B')
            {
                ptb = max(i, ptb);
            }
        }
        if (pta > ptb)
            cout << 0 << endl;
        else
            cout << ptb - pta << endl;
    }
    return 0;
}
