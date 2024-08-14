#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        for (int i = 1; i <= 4; i++)
        {
            cin >> x >> y;
            if (i == 1)
            {
                a = x;
                b = y;
                continue;
            }
            if (i == 2)
            {
                if ((a == x) || (a != x && b != y))
                {
                    a = 0;
                    b = abs(b - y);
                }
                if (b == y)
                {
                    b = 0;
                    a = abs(a - x);
                }
            }
        }
        cout << (a * a) + (b * b) << endl;
    }

    return 0;
}