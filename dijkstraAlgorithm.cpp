#include <bits/stdc++.h>
using namespace std;
#define HIGH 9999999
int V, E;
vector<int> dist;
typedef pair<int, int> t_pair;
vector<vector<t_pair>> g;

void Dijkstra(int src)
{
    int u1, v1;
    priority_queue<t_pair, vector<t_pair>, greater<t_pair>> pq;
    dist[src] = 0;
    pq.push(make_pair(dist[src], src));
    while (!pq.empty())
    {
        u1 = pq.top().second;
        pq.pop();
        for (int i = 0; i < g[u1].size(); i++)
        {
            v1 = g[u1][i].second;
            int weight = g[u1][i].first;

            if (dist[v1] > dist[u1] + weight)
            {
                dist[v1] = dist[u1] + weight;
                pq.push(make_pair(dist[v1], v1));
            }
        }
    }
}

void add_edge(int u, int v, int cost)
{
    g[u].push_back(make_pair(cost, v));
}

int main()
{
    int u, v, w, src;
    cout << "Enter the number of vertices & edges: ";
    cin >> V >> E;

    g.resize(V);
    dist.resize(V, HIGH);

    cout << "Enter u, v & weight: ";
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v >> w;
        if (u >= 0 && u < V && v >= 0 && v < V)
        {
            add_edge(u, v, w);
        }
        else
        {
            cout << "Invalid edge. Please enter a valid u and v.\n";
            i--; // to redo this edge input
        }
    }

    cout << "Source: ";
    cin >> src;
    if (src < 0 || src >= V)
    {
        cout << "Invalid source vertex.\n";
        return -1;
    }

    Dijkstra(src);

    for (int i = 0; i < V; i++)
    {
        if (dist[i] == HIGH)
            cout << "Distance of node " << i << " is INF" << endl;
        else
            cout << "Distance of node " << i << " is " << dist[i] << endl;
    }

    return 0;
}
