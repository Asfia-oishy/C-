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
        string s;
        cin >> s;

        int cnt_1 = 0, cnt_2 = 0;
        int c1=0,c2=0;
        bool f = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '>')
            {
                cnt_1++;
                c1=max(c1,cnt_1);

            }
            else
            {
                cnt_1=0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '<')
            {
                cnt_2++;
                c2=max(c2,cnt_2);

            }
            else
            {
                cnt_2=0;
            }
        }

        cout << max(c1,c2) + 1 << endl;
    }

    return 0;
}