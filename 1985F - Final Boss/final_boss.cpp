#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // first turn on 0th sec
        int h, n, sum = 0, mini = 1000000000, ind;
        cin >> h >> n;
        int a[n], c[n]; // attacks and cooldown
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            if (c[i] < mini)
            {
                mini = c[i];
                ind = i;
            }
        }
        int low = 0; // lowest 1 turn
        int high = int(h / mini*a[ind]);
        float damage;
        int mid = low + (high - low) / 2;
        // initially all are not at coolDown

        if (sum >= h)
        {
            cout << 1 << endl;
            continue;
        }
        h -= sum;
        int turn, attack = 0;

        for (turn = 2; turn <= high; turn++)
        {
            attack = 0;
            for (int j = 0; j < n; j++)
            {
                int cnt = (turn - 1) / c[j];
                if (cnt > 0)
                {
                    attack += (cnt * a[j]);
                }
            }
            if (attack >= h)
            {
                cout << turn << endl;
                break;
            }
        }

    
    }
    return 0;
}