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
        int arr[n], max_ = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if ((i + 1) % 2 == 1)
            {
                max_ = max(max_, arr[i]);
            }
        }

        cout << max_ << endl;
    }
    return 0;
}