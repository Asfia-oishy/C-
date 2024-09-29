#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int cnt = 0;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i]>=k)
                sum += arr[i];

            if (arr[i] == 0 && sum>0)
            {
                cnt++;
                sum--;
            }
        }

        cout << cnt<< endl;
    }
    return 0;
}