#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int main()
{
    int t,n,p,q,k;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        v.clear();
        cin>>n;
        int a[n];
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];

        }


        for(int k=0; k<n-1; k++ )
        {
            p=a[k];
            q=a[k+1];
            v.push_back(max(p,q));

        }

        sort(v.begin(),v.end());
        k=v[0]-1;
        cout<<k<<endl;
    }

    return 0;

}
