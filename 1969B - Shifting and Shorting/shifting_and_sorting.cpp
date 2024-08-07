#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    vector<pair<ll, ll>> one_zero; // how many 0's after how many 1's
    ll t;
    cin >> t;
    while (t--)
    {
        ll cost = 0;
        string s;
        cin >> s;
        ll len = s.size(), cnt_1 = 0, cnt_0 = 0;
        one_zero.clear();
        for (ll i = 0; i < len; i++)
        {
            if (s[i] == '1')
                cnt_1++;
            else
                cnt_0++;
        }

        if (cnt_0 == len || cnt_1 == len)
        {
            cout << 0 << endl;
            continue;
        }

        ll first_1 = false, first_0 = false;
        ll c0 = 0, c1 = 0;

        for (ll i = 0; i < len; i++)
        {

            if (s[i] == '1')
            {
                if (!first_0 && !first_1)
                {
                    first_1 = true;
                    c1 = 1;
                }
                else if (first_1 && !first_0)
                    c1++;
                else if (first_0 && !first_1)
                {
                    one_zero.push_back(make_pair(c1, c0));
                    c1 = 1;
                    c0 = 0;
                    first_1 = true;
                    first_0 = false;
                }
                if (first_1 && i == len - 1)
                {
                    break;
                }
            }
            else
            {
                if (!first_0 && first_1)
                {
                    first_0 = true;
                    c0 = 1;
                    first_1 = false;
                }
                else if (first_0 && !first_1)
                    c0++;
                if (i == len - 1)
                {
                    one_zero.push_back(make_pair(c1, c0));
                    break;
                }
            }
        }
        ll x1 = 0, x0 = 0;
        for (ll j = 0; j < one_zero.size(); j++)
        {
            x1 += one_zero[j].first;
            x0 = one_zero[j].second;
            cost += (x1 + 1) * x0;
        }
        cout << cost << endl;
    }

    return 0;
}