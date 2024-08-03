#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, t, result = 0, index;
        cin >> n >> t;
        int a[n], b[n];
        vector<int> d_ind;
        d_ind.clear();
        for (int i = 0; i < n; i++) // duration
        {
            cin >> a[i];
            if ((a[i] + i) <= t)
                d_ind.push_back(i);
        }

        for (int i = 0; i < n; i++) // entertainment
        {
            cin >> b[i];
        }

        for (int i = 0; i < d_ind.size(); i++)
        {
            if (b[d_ind[i]] > result)
            {
                result = b[d_ind[i]];
                index = d_ind[i];
            }
        }
        if (d_ind.size() == 0)
        {
            cout << -1 << endl;
        }
        else
            cout << index + 1 << endl;
    }

    return 0;
}