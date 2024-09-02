#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue<int> pq;
        int n, score = 0;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < (2 * n); i++)
        {
            cin >> arr[i];
            pq.push(arr[i]);
        }
        while (n--)
        {
            int i = pq.top();
            pq.pop();
            int j = pq.top();
            pq.pop();
            score += min(i, j);
        }
        cout << score << endl;
    }
    return 0;
}