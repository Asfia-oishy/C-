#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s[n], prev;
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    prev = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] != prev)
        {
            prev = s[i];
        }
        else
        {
            cout << "NO" << endl;
            f = true;
            break;
        }
    }
    if (!f)
    {
        bool flag = false;
        map<char, int> mp;
        map<char, int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mp[s[i][j]]++;
            }
            if (mp.size() != 1)
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
            mp.clear();
        }
        if (!flag)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}