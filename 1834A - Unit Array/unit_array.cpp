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
        int arr[n], ans = 0;
        int pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == -1)
                neg++;
            else
                pos++;
        }

        if (neg <= pos && neg % 2 == 0)
        {
            ans = 0;
        }
        else
        {
            if (neg > pos)
            {
                while (neg > pos)
                {
                    neg--;
                    pos++;
                    ans++;
                }
            }
            if (neg % 2 != 0)
                ans++;
        }

        cout << ans << endl;
    }
    return 0;
}