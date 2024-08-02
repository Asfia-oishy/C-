#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long int sum = 0,c_1=0;
        cin >> n;
        int a[n],b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                c_1++;
            sum += a[i];
        }
        if (n == 1 || c_1 == n)
        {
            cout << "NO" << endl;
            continue;

        }
        if ((sum>= c_1+n) && n>1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0; 
}
