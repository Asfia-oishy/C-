#include<bits/stdc++.h>
using namespace std;

#define pb push_back
bool comp(pair<int,int> &a,pair<int,int> &b)
{
    if(a.first==b.first)
        return a.second>b.second;
    return a.first<b.first;

}

int main()
{

    string s;
    cin>>s;
    int len = s.size(),var,index=-1,val;
    vector<pair<int,int>> prefix;
    pair<int,int> p(0,0);
    prefix.pb(p);

    for(int i=0; i<len-1; i++) //prefix balance calculation
    {
        val = prefix[i].first;

        if(s[i]=='(')
        {
            p= make_pair(val+1,i+1);
            prefix.pb(p);
        }
        else
        {
            p = make_pair(val-1,i+1);
            prefix.pb(p);
        }
    }

    sort(prefix.begin(),prefix.end(),comp);

//    for(int i=0;i<len;i++)
//    {
//        cout<<prefix[i].first<<" "<<prefix[i].second<<endl;
//    }

    for(int j=0; j<len; j++)
    {
        cout<<s[prefix[j].second];
    }






    return 0;

}
