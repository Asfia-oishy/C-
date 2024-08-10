#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != '4' && s[i] != '7')
        {
            cout << "NO" << endl;
            flag = false;
            break;
        }
    }
    if (flag)
    {
        int x = 0, y = 0;
        for (int i = 0; i < n / 2; i++)
        {
            x += (s[i] - '0');
        }
        for (int j = n / 2; j < n; j++)
        {
            y += (s[j] - '0');
        }
        if (x == y)
            cout<<"YES" << endl;
        else
            cout<<"NO" << endl;
    }
    return 0;
}