#include <bits/stdc++.h>
using namespace std;
bool visited[50];
int  dis[50],V, E;
vector<int> graph[50], out;
queue<int> Q;
void bfs(int src)
{
    visited[src] = true;
    Q.push(src);
    dis[src] = 0;
    out.push_back(src);
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(visited[v]==false)
            {
                out.push_back(v);
                visited[v] = true;
                dis[v] = dis[u]+1;
                Q.push(v);
            }
        }

    }
}

void addEdge(int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}
int main()
{
    cout << "Enter number of vertices and edges : ";
    cin >> V >> E;
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(u, v);
    }
    for (int i = 0; i < V; i++)
        visited[i] = false;
    cout << "Source : ";
    int s;
    cin >> s;
    bfs(s);
    for (int i = 1; i <= V; i++)
    {
        cout << s << "- " << i << " distance= " << dis[i] << "\n";
    }
    for (int j = 0; j < out.size(); j++)
        cout << out[j] << " ";
    cout << endl;
}
