#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void make_parent(ll d, vector<ll> &par)
{
    par[d] = d;
}

ll find_p(ll d, vector<ll> &par)
{
    if (par[d] == d)
        return d;
    else

        return par[d] = find_p(par[d], par);
}
void unite(ll a, ll b, vector<ll> &par)
{
    ll root_a = find_p(a, par);
    ll root_b = find_p(b, par);
    if (root_a == root_b)
        return;
    else
        par[root_b] = root_a;
}

int  main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> person(n);
    for (ll i = 0; i < n; i++)
    {
        person[i] = i + 1;
    }
    vector<ll> gold;
    for (ll i = 0; i < n; i++)
    {
        ll g;
        cin >> g;
        gold.push_back(g);
    }

    vector<ll> parent(n + 1);

    for (ll i = 0; i < n; i++)
    {
        make_parent(person[i], parent);
    }

    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        unite(u, v, parent);
    }
    for (ll i = 0; i < n; i++)
    {
        find_p(person[i], parent);
    }
    ll min_gold = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll p = parent[person[i]];
        if (gold[p - 1] > gold[i])
        {
            gold[p - 1] = gold[i];
        }
    }

    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll p = parent[person[i]];
        mp[p]++;
    }
    map<ll, ll>::iterator it;
    ll ans = 0;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        ll p = it->first;
        ans += gold[p - 1];
    }

    cout << ans << endl;

    return 0;
}