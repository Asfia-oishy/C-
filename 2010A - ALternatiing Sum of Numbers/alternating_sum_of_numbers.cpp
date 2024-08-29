#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            if ((i + 1) % 2 == 1)
                sum += val;
            else
                sum -= val;
        }
        cout << sum << endl;
    }
    return 0;
}