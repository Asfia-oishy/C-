#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,min;
    cin>>n>>m>>k;
    if(m<k)
    {
         if(n<=m) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
    else
    {
         if(n<=k) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
    return 0;

}
