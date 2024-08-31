#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int max_ = 0, ans;
        for (int i = l; i <= r; i++)
        {
            string s = to_string(i);
            sort(s.begin(), s.end());
            int diff = s[s.size() - 1] - s[0];
            if (diff >= max_)
            {
                max_ = diff;
                ans = i;
                if (max_ == 9)
                    break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}