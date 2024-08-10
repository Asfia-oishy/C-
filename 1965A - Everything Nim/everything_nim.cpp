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
        vector<ll> arr(n), maxi = 0, mini = 999999999, minus_sum = 0;
        for (ll i = 0; i < n; i++)
        {
            int x ;
            cin >> x;
            arr.push_back(x);
            if (arr[i] > maxi)
                maxi = arr[i];
            if (arr[i] < mini)
                mini = arr[i];
        }

        if (maxi == mini)
        {
            cout << "Alice" << endl;
            continue;
        }

        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end()); // erase duplicates
        int even = 0, odd = 0;
        for (ll i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        ll cnt = 0, sum = 0;
        ll val;
        for (ll i = 0; i < arr.size(); i++)
        {

            val = arr[i] - sum;
            cout << "val " << val << endl;
            if (maxi > 0)
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
