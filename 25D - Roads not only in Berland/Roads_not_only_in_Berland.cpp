#include <bits/stdc++.h>
using namespace std;

int find_p(int a, vector<int> &p)
{
    if (p[a] == a)
        return a;
    else
        return p[a] = find_p(p[a], p); // Path compression
}

void unite(int a, int b, vector<int> &p)
{
    int root_a = find_p(a, p);
    int root_b = find_p(b, p);
    if (root_a == root_b)
        return;
    else
        p[root_b] = root_a;
}

void make_set(int n, vector<int> &p)
{
    p[n]=n;
}

int main()
{

    int n;
    cin >> n;

    vector<int> p(n + 1, -1);
    vector<pair<int, int>> extra;
    vector<int> nodes(n,-1);
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        nodes[i] = val;
        make_set(nodes[i],p);
        val++;
    }
 

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        if (find_p(u, p) != find_p(v, p))
            unite(u, v, p);
        else
        {
            extra.push_back({u, v});
        }
    }

    // MAP FOR COUNTING CONNECTED COMPONENT
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[find_p(nodes[i], p)]++;
    }

    int days = mp.size() - 1; // need to make roads = connected components-1;
    cout << days << endl;

    for (int i = 0; i < days; i++)
    {
        cout << extra[i].first << " " << extra[i].second << " ";
        map<int, int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if (find_p(it->first,p) != find_p(extra[i].first,p) && find_p(it->first,p) != find_p(extra[i].second,p))
            {
                cout << extra[i].first << " " << it->first << endl;
                unite(it->first,extra[i].second,p);
                break;
            }
        }
    }

    return 0;
}