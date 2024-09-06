#include <bits/stdc++.h>
using namespace std;

bool isPossible(int mid, int k, int arr[], int n)
{
    int win = 0, index = k;
    bool flag = false;
    for (int i = 1; i < k; i++)
    {
        if (arr[i] > arr[k])
        {
            if (k - i > i - 1 - 1 || i == 1)
            {
                int tmp = arr[k];
                arr[k] = arr[i];
                arr[i] = tmp;
                index = i;
                break;
            }
            else
            {
                flag = true;
            }
        }
        if (i == k - 1 || flag)
        {
            int tmp = arr[k];
            arr[k] = arr[1];
            arr[1] = tmp;
            index = 1;
            break;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (index == 1)
        {
            if (i > index)
            {
                if (arr[i] < arr[index])
                    win += 1;
                else
                    break;
            }
        }
        else
        {
            if (i == index)
            {
                win++;
            }
            if (i > index)
            {
                if (arr[i] < arr[index])
                    win += 1;
            }
        }
    }
    // cout << win << " " << k << " " << mid << endl;
    if (win >= mid)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n + 1], ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        if (n == 2)
        {
            if (max(arr[1], arr[2]) == arr[k])
                cout << 1 << endl;
            else
                cout << 0 << endl;
            continue;
        }
        else
        {
            int l = 0, h = n - 1;
            while (l <= h)
            {
                int mid = l + (h - l) / 2;

                if (isPossible(mid, k, arr, n))
                {
                    ans = max(ans, mid);
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }
            }

            cout << ans << endl;
        }
    }
    return 0;
}