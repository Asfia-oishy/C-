#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int r = n, l = n - arr[n];
    map<pair<int, int>, int> mp;
    while (l <= r)
    {
        // cout << "     " << l << " " << r << endl;
        if (l < r)
        {
            mp[make_pair(l, r - 1)]++;
        }
        if (l == 1)
            break;

        r--;
        l = r - arr[r];
        if (l < 1)
            l = 1;
    }
    map<pair<int, int>, int>::iterator it;
    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first.first << " " << it->first.second << endl;
    // }
    // cout << endl;
    if (mp.size() == 0)
        cout << n << endl;
    else
    {
        it = mp.begin();
        int alive = it->first.first - 1;
        int last = it->first.second;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if (it->first.first - last > 1)
            {
                alive += (it->first.first - last - 1);
            }
            last = it->first.second;
            // cout << it->first.first << " " << it->first.second << endl;
        }
        alive += n - last;

        cout << alive << endl;
    }

    return 0;
}