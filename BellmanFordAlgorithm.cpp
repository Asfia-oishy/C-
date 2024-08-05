#include <bits/stdc++.h>
using namespace std;

#define HIGH 9999999
int dis[50], V, E;
bool neg_cycle;
vector<pair<int, pair<int, int>>> vect;

bool BellmanFord(int src)
{
    int u1, v1, w1;
    neg_cycle = true;
    dis[src] = 0;
    for (int i = 0; i < V; i++)
    {
        dis[i] = HIGH;
    }
    dis[src] = 0;
    for (int i = 1; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            u1 = vect[j].first;
            v1 = vect[j].second.first;
            w1 = vect[j].second.second;
            if (dis[v1] > dis[u1] + w1)
            {
                dis[v1] = dis[u1] + w1;
            }
        }
    }
    for (int j = 0; j < E; j++)
    {
        u1 = vect[j].first;
        v1 = vect[j].second.first;
        w1 = vect[j].second.second;
        if (dis[v1] > dis[u1] + w1)
        {
            dis[v1] = dis[u1] + w1;
            neg_cycle = false;
        }
    }
    return neg_cycle;
}

int main()
{
    int u, v, w, src, B;

    cout << "Enter the no. of vertices & edges: ";
    cin >> V >> E;
    for (int i = 0; i < E; i++)
    {
        cout << "enter src , des ,weight :";
        cin >> u >> v >> w;
        vect.push_back(make_pair(u, make_pair(v, w)));
    }
    cout << "source :";
    cin >> src;
    B = BellmanFord(src);
    if (B)
    {
        for (int i = 0; i < V; i++)
        {
            cout << "dis of node " << i << " is " << dis[i] << endl;
        }
    }
    else
        cout << "Negative cycle found" << endl;
}
