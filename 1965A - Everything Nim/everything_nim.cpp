#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n], maxi = 0, minus_sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > maxi)
                maxi = arr[i];
        }
        sort(arr, arr + n);
        ll cnt = 0, sum = 0;
        ll temp = -1, val;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] != temp)
            {
                val = arr[i] - sum;
                temp = arr[i];
            }
            else
                val = 0;
                
            cout << "val " << val << endl;
            if (maxi > 0 && val != 0)
            {
                maxi = maxi - val;
                sum += val;
                cnt++;
                cout << maxi << " " << cnt << endl;
            }
        }
        if (cnt % 2 == 1)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}