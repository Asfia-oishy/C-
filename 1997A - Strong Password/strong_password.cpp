#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, ans = "";
        cin >> s;
        bool flag = false;
        int len = s.size();
        if (len == 1)
        {
            ans = s;
            if (s[0] == 'z')
                ans += (s[0] - 1);
            else
                ans += (s[0] + 1);
        }
        else
        {
            for (int i = 0; i < len - 1; i++)
            {
                ans += s[i];

                if (s[i] == s[i + 1] && !flag)
                {
                    flag = true;
                    if (s[i] == 'z')
                    {
                        ans += (s[i] - 1);
                    }
                    else
                        ans += (s[i] + 1);
                }
            }

            ans += (s[len - 1]);
            if (!flag)
            {
                if (s[len - 1] == 'z')
                    ans += 'a';
                else
                    ans += 'z';
            }
        }

        cout << ans << endl;
    }
    return 0;
}