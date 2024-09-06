
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    vector<ll> v(n);
    vector<ll> a(n);
    ll ans2 = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        a[i] = v[i];
    }
    swap(a[0], a[k]);
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[0])
            ans2++;
        else
            break;
    }
    for (ll i = 0; i < k; i++)
    {
        if (v[i] > v[k])
        {
            swap(v[i], v[k]);
            k = i;
            break;
        }
    }
    ll ans = 0;
    if (k != 0)
        ans++;
    for (ll i = k + 1; i < n; i++)
    {
        if (v[i] < v[k])
            ans++;
        else
            break;
    }
    cout << max(ans2, ans) << endl;
}

int main()
{

    ll tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}