#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++)
        {
            p[i] = p[i] - 1; // 2,0,1,4,3
        }
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            int bf = p[i];
            if (p[bf] == i)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}