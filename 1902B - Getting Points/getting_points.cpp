#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, p, l, t, rest = 0, unlocked_t;
        cin >> n >> p >> l >> t;
        if (n % 7 != 0)
            unlocked_t = (n / 7) + 1;
        else
            unlocked_t = n / 7;

        ll low = 0;
        ll high = n, mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2; // is he got expelled for taking rest of mid days;
            ll work_d = n - mid, points;

            if (work_d * 2 >= unlocked_t)
            {
                points = (work_d * l) + unlocked_t * t;
            }
            else
            {
                points = (work_d * l) + (work_d * 2 * t);
            }
            if (points >= p)
            {
                rest = max(rest, mid);
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        cout << rest << endl;
    }
    return 0;
}