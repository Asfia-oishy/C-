#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c, bb, cc;
        cin >> a >> b >> c;

        int tents = a;
        if (b <= 3)
        {
            if (b == 0)
            {
                if (c <= 3 && c > 0)
                    tents++;
                else
                {
                    tents += (c / 3);
                    if (c % 3 != 0)
                        tents++;
                }
            }
            else if (b == 3)
            {
                tents++;
                if (c <= 3 && c > 0)
                    tents++;
                else
                {
                    tents += (c / 3);
                    if (c % 3 != 0)
                        tents++;
                }
            }
            else
            {
                int need = 3 - b;
                if (c == need)
                    tents++;
                else if (c < need)
                    tents = -1;
                else
                {
                    tents++;
                    c = c - need;
                    if (c <= 3 && c > 0)
                        tents++;
                    else
                    {
                        tents += (c / 3);
                        if (c % 3 != 0)
                            tents++;
                    }
                }
            }
        }
        else
        {
            tents += (b / 3);
            if (b % 3 != 0)
            {
                int need = 3 - (b % 3);
                if (c == need)
                    tents++;
                else if (c < need)
                    tents = -1;
                else
                {
                    tents++;
                    c = c - need;
                    if (c <= 3 && c > 0)
                        tents++;
                    else
                    {
                        tents += (c / 3);
                        if (c % 3 != 0)
                            tents++;
                    }
                }
            }
        }
        cout << tents << endl;
    }
    return 0;
}