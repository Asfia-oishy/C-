#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>> g, int src, vector<bool> &visited, int parent)
{
    int u = src;
    visited[u] = true;

    for (int i = 0; i < g[u].size(); i++)
    {
        int v = g[u][i];

        if (v != parent)
        {
            if (visited[v])
                return true;
            if (dfs(g, v, visited, u))
                return true;
        }
    }
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

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (dfs(g, 0, visited, -1))
                cycle = true;
        }
    }

    if (cycle)
        cout << "Cycle is present" << endl;
    else
        cout << "There is no cycle in the graph" << endl;
    return 0;
}