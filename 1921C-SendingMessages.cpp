#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        ll val = 0;
        ll cnt = 0;

        for (ll i = 0; i < n; i++)
        {
            ll x = (v[i] - val) * a;
            if (x > b)
                f -= b;
            else
                f -= x;
            val = v[i];
            if (f > 0)
                cnt++;
        }
        if (cnt < n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}