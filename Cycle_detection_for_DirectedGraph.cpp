#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>> g, int src, vector<bool> &visited, map<int, int> mp)
{
    int u = src;
    visited[u] = true;
    mp[u]++;

    for (int i = 0; i < g[u].size(); i++)
    {
        int v = g[u][i];
        if (!visited[v])
        {
            if(dfs(g, v, visited, mp))
            return true;
        }
         if (mp[v] == 1)
        {
            return true;
        }
    }
    mp[u]--;
    return false;
}

int main()
{
    int V, E;
    cin >> V >> E;
    vector<vector<int>> g(V);

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v); // adding edges
    }

    vector<bool> visited(V, false);
    bool cycle = false;
    map<int, int> mp;

    for (int i = 0; i < V; i++)
    {
        mp.clear();
        if (!visited[i])
        {
            if (dfs(g, 0, visited, mp))
                cycle = true;
        }
    }

    if (cycle)
        cout << "Cycle is present" << endl;
    else
        cout << "There is no cycle in the graph" << endl;
    return 0;
}