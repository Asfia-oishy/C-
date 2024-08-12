#include <bits/stdc++.h>
using namespace std;

// two pointers

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
        int l = 0,r=1;
        bool checked[n - 1];
        for (int j = 0; j < n - 1; j++)
        {
            checked[j] = false;
        }
        int op = 0;
        while (l < n - 1)
        {
            if (s[l] == 'A' && s[l + 1] == 'B' && checked[l] == false)
            {
                s[l] = 'B';
                s[l + 1] = 'A';
                op++;
                checked[l] = true;
                if(s[r]=='A' && r<n-1 && s[r+1]=='B')
                {
                    s[r]='B';
                    s[r+1]='A';
                    checked[r]=true;
                    op++;
                }

                l = 0;
            }
            else
            {
                l++;
                r=l+1;
            }
        }
        cout << op << endl;
    }
    return 0;
}