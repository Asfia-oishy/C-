#include <bits/stdc++.h>
using namespace std;

queue<int> Q;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int total_b = ((n-1)* (n-2)) / 2 ; //without zero
        int all = n*(n-1)/2;
        if(all-k<=total_b)
        {
            cout<<1<<endl;
            continue;
        }
        vector<int> g[n], out;
        out.clear();
        for (int i = 0; i < g->size(); i++)
        {
            g[i].clear();
        }
        int all_k = all-k;
        for (int i = n-1; i >=1; i--) //minimum island .so cannot start from zero
        {
            for (int j = n-2; j >=0; j--)
            {
                if (all_k > 0)
                {
                    g[i].push_back(j);
                    g[j].push_back(i);
                    all_k--;
                }
            }
        }
        int visited[n];
        for (int i = 0; i < n; i++)
        {
            visited[i] = -1;
        }
        visited[0] = 1;
        Q.push(0);
        out.push_back(0);
        while (!Q.empty())
        {
            int u = Q.front();
            Q.pop();
            for (int i = 0; i < g[u].size(); i++)
            {
                int v = g[u][i];
                if (visited[v] == -1)
                {
                    out.push_back(v);
                    visited[v] = 1;
                    Q.push(v);
                }
            }
        }

        cout << out.size() << endl;
    }

    return 0;
}