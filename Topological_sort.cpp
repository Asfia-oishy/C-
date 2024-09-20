#include <bits/stdc++.h>
using namespace std;

bool isCycle(vector<vector<int>> g, int src, vector<bool> &visited, map<int, int> mp)
{
    int u = src;
    visited[u] = true;
    mp[u]++;

    for (int i = 0; i < g[u].size(); i++)
    {
        int v = g[u][i];
        if (!visited[v])
        {
            if(isCycle(g, v, visited, mp))
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
void top_sort(vector<vector<int>> g, int src, vector<bool> &visited)
{
    int u = src;
    visited[u] = true;
    cout << u << " ";

    for (int i = 0; i < g[u].size(); i++)
    {
        int v = g[u][i];

        if (!visited[v])
        {

            top_sort(g, v, visited);
        }
    }
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
    map<int,int> mp;

    for (int i = 0; i < V; i++)
    {
        mp.clear();
        if (!visited[i])
        {
            if (isCycle(g, 0, visited, mp))
                cycle = true;
        }
    }

    if (cycle)
        cout << "Cycle is present. Topological Sort is not possible" << endl;

    else
    {
        visited.clear();
        visited.assign(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                top_sort(g, i, visited);
            }
        }
    }

    return 0;
}