#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,tmp,sum=0;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>tmp;
            sum+=tmp;
        }
        ll low=1,high=2e9,mid,ans=0;
        while(low<=high)
        {
            mid = low+(high-low)/2;
            if(mid*mid==sum)
            {
                ans=1;
                break;
            }
            else if(mid*mid<sum)
            low=mid+1;
            else
            high=mid-1;
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

      
    return 0;
}