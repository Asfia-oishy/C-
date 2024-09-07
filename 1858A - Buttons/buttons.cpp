#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
        {
            if (c % 2 == 0)
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }
        else
        {
            int m = min(a, b);
            a -= m;
            b -= m;
            if (a == 0)
            {
                cout << "Second" << endl;
            }
            else
            {
                cout << "First" << endl;
            }
        }
    }
    return 0;
}