#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int time;
        if (x >= y)
        {
            time = x;
        }

        else
        {
            int z = y - x;
            if (z <= k)
            {
                time = y;
            }
            else
            {
                time = (x + k) + 2 * (y - (x + k));
            }
        }
        cout << time << endl;
    }
    return 0;
}