#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool flag = true;
        cin >> n;
        int arr[n + 1], occupied[n + 1];
        for (int i = 0; i <= n; i++)
        {
            occupied[i] = 0;
        }
        for (int i = 1; i <= n; i++)

            cin >> arr[i];

        for (int i = 1; i <= n; i++)
        {
            occupied[arr[i]] = 1;
            if (i > 1)
            {

                if ((arr[i] == 1 && occupied[2] == 0) || (arr[i] == n && occupied[n - 1] == 0) || (occupied[arr[i] - 1] == 0 && occupied[arr[i] + 1] == 0))
                {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}