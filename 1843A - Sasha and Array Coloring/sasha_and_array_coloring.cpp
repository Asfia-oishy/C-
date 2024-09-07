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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int l = 0, r = n - 1;
        int cost = 0;
        while (l < r)
        {
            cost += arr[r] - arr[l];
            r--;
            l++;
        }
        cout << cost << endl;
    }
    return 0;
}