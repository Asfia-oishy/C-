#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int tents = a;
        

        if (b < 3)
        {

            int extra = 3 - b;
            if (c < extra)
            {
                cout << -1 << endl;
                continue;
            }
            tents++; // for extroverts
            if (c == extra)
            {
                cout << tents << endl;
                continue;
            }
        }
        else
        {
            if (b == 3)
            {
                tents++;
                if (c <= 3)
                    tents++;
                else
                {
                    int cc = c / 3;
                    tents += cc;
                    tents += (c % 3);
                }
                cout << tents << endl;
                continue;
            }
            else
            {
                int bb = b / 3;
                tents += bb;
                if (c < (b % 3))
                {
                    cout << -1 << endl;
                    continue;
                }
                else if (c == (b % 3))
                {
                    tents++;
                    cout << tents << endl;
                    continue;
                }
                else
                {
                    tents++;
                    c = c - (b % 3);
                    if (c <= 3)
                        tents++;
                    else
                    {
                        tents += (c / 3);
                        if (c % 3 == 0)
                        {
                            cout << tents << endl;
                            continue;
                        }
                        else
                        {
                            tents++;
                            cout << tents << endl;
                            continue;
                        }
                    }
                }
            }
        }
    }
    return 0;
}