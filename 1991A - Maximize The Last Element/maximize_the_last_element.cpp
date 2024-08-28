#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> &a, pair<int, int> &b)
{
    return a.first >= b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> v;
        v.clear();

        int n;
        cin >> n;
        int arr[n], max_ = 0, ind;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            v.push_back(make_pair(arr[i], i + 1));

            if (arr[i] > max_)
            {
                max_ = arr[i];
                ind = i + 1;
            }
        }
        sort(v.begin(), v.end(), comp);

        if (ind % 2 == 1)
        {
            cout << max_ << endl;
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
            {
                int index = v[i].second;
                if (index % 2 == 1)
                {
                    cout << v[i].first << endl;
                    break;
                }
            }
        }
    }
    return 0;
}