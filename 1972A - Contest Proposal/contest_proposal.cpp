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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int l = 0, r = n - 1;
        int cnt = 0;
        while (l<=r)
        {
            if (a[l] > b[l])
            {
                a[r] = b[l];
                sort(a, a + n);
                cnt++;
            }
            else
            {
                l++;

            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}