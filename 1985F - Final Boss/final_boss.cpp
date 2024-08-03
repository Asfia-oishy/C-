#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        // first turn on 0th sec
        ll h, n;
        cin >> h >> n;
        ll a[n], c[n]; // attacks and cooldown
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        ll low = 1; // lowest 1 turn
        ll high = ll(2e12);
        ll damage, attack;
        ll mid, turn = high;
        // initially all are not at coolDown
 
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            damage = 0;
            for (ll i = 0; i < n; i++)
            {
                attack = (mid - 1) / c[i]; // here mid means turns.so ith second would be mid-1
                attack += 1;               // initial one
                damage += (attack * a[i]);
                if (damage >= h)
                    break;
            }
            if (damage >= h)
            {
                turn = min(turn, mid);
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << turn << endl;
    }
    return 0;
}