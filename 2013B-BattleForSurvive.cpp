#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> arr(n);
        for (long long int i = 0; i < n; i++)
            cin >> arr[i];

        if (n == 2)
            cout << arr[1] - arr[0] << endl;

        else
        {
            long long int sum = 0;
            for (long long int i = 0; i < n - 2; i++)
                sum += arr[i];

            cout<<arr[n-1]-arr[n-2]+sum<<endl;
        }
    }

    return 0;
}