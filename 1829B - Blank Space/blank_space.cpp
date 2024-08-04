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
        int arr[n], result = 0;
        bool isZero = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (!isZero && arr[i] == 0)
            {
                isZero = true;
            }
        }

        if (!isZero)
            cout << 0 << endl;
        else
        {
            result = 1;

            int count_0 = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    count_0 = 0;
                }
                else
                    count_0++;
                result = max(result, count_0);
            }
            cout << result << endl;
        }
    }
    return 0;
}