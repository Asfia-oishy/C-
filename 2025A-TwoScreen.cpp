#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s, t;
        cin >> s >> t;

        int n = s.size();
        int m = t.size();
        int len, cnt = 0;
        bool f = false;

        n < m ? len = n : len = m;

        for (int i = 0; i < len; i++)
        {
            if (s[i] == t[i])
            {
                cnt++;
                n--;
                m--;
                f = true;
            }
            else
                break;
        }
        if (f)
            cnt++;
        cout << cnt + n + m << endl;
    }

    return 0;
}