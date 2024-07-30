#include<bits/stdc++.h>
using namespace std;
//#define push_back pb;

int cnt=0;
int vis[100];
stack<int> s;

void make_friend(int j)
{
    //vis[j]=1;

    s.push(j);
    while(!s.empty())
    {
        int u= s.top();
        //cout<<u<<" ";
        s.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(!vis[v])
            {
                vis[v]=1;
                s.push(v);
            }
        }
    }
}
int main()
{
    int N,M,a,b;
    cin>>N>>M;
    vector<int> adj[N+1];
    for(int i=1; i<=M; i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int u;

    for(int i=1;i<=N;i++)
    {
        s.push(i);
        len = adj[i].size();
        int arr[len];


    }





    for(int i=1; i<=N; i++)
    {
        cout<<i<<" ";
        for(int j=0; j<vect[i].size(); j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<cnt<<endl;


    return 0;
}
