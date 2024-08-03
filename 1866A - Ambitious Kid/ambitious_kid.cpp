#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min_ = 100000000;
    cin >> n;
    int arr[n];
    bool isZero = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            isZero = true;
        if (abs(arr[i]) < min_)
            min_ = abs(arr[i]);
    }
    if (isZero)
        cout << 0 << endl;
    else
    {
        cout << min_ << endl;
    }
    return 0;
}