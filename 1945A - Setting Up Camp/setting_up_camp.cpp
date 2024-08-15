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
        int r = b % 3;
        if (r == 0)
        {
            tents += (b / 3);
            if (c % 3 == 0)
                tents += (c / 3);
            else
                tents += ((c / 3) + 1);
        }
        else
        {
            tents += (b / 3);
            b = b % 3;
            int need = 3 - b;
            if (c < need)
                tents = -1;
            else 
            {
                tents++;
                c=c-need;
                if(c%3==0)
                tents+=(c/3);
                else
                tents+=((c/3)+1);
            }
        }
        cout << tents << endl;
    }
    return 0;
}