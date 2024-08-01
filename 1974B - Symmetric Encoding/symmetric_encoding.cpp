#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        vector<char> v;
        vector<pair<char,char>> vv;
        cin >> n;
        string b; // encoded one
        cin >> b;
        set<char> unique;
        unique.clear();
        for(int i=0;i<n;i++)
        {
            unique.insert(b[i]);

        }
        set<char>:: iterator a;
        for( a=unique.begin();a!=unique.end();++a)
        {
            v.push_back(*a);
        }
        int l=v.size();
        for(int i=0;i<l;i++)
        {
            vv.push_back(make_pair(v[i],v[l-i-1]));
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<l;j++)
            {
                if(vv[j].first==b[i])
                {
                    cout<<vv[j].second;
                }

            }
        }
        cout<<endl;

    }
    return 0;
}