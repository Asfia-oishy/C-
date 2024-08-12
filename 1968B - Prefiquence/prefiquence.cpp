#include <bits/stdc++.h>
using namespace std;

// two pointers

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a;
        cin >> b;
        int taken[n + 1];
        for (int i = 0; i <= n; i++)
        {
            taken[i] = -1;
        }
        int k = 0;
        int l1 = 0, l2 = 0;

        while (l2 < m)
        {
            if (a[l1] == b[l2] && taken[l1]==-1)
            {
                taken[l1]=1;
                k++;
                l1++; 
                l2++;             
            }

            else if(b[l2]!=a[l1])
            {
                l2++;
            }
        }
        cout<<k<<endl;
    }

    return 0;
}
