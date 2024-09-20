#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; // rows
        cin >> n;

        vector<vector<int>> v(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                char ch;
                cin >> ch;
                v[i].push_back(ch);
            }
        }
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < 4; j++)
            {
                if (v[i][j] == '#')
                {
                    ans[n - i - 1] = j + 1;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}