
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
        ll arr[n], arr2[n], index = 0, maxi = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i];
        }
        sort(arr2, arr2 + n);
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr2[i])
            {
                index = i + 1;
                flag = true;
            }
        }
        if (flag == false)
        {
            cout << 0 << endl;
            continue;
        }
        if (index != 0)
        {
            for (int i = 0; i < index; i++)
            {
                if (maxi < arr[i])
                    maxi = arr[i];
            }
            cout << maxi<< endl;
        }
        
    }

    return 0;
}