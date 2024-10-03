#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll arr[n];
        ll product = 1;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            product *= arr[i];
        }

        if (2023 % product != 0)
        {
            cout<<"NO"<<endl;
            continue;
        }

        ll val = 2023/product;

        cout<<"YES"<<endl;

        if(k==1)
        {
            cout<<val<<endl;
        }

        else if(k==2)
        {
            cout<<val<< " "<<1<<endl;
        }
        else if(k==3)
        {
            cout<<val<< " "<<1<<" "<<1<<endl;
        }
        else if(k==4)
        {
            cout<<val<<" "<<1<<" "<<1<<" "<<1<<endl;
        }
        else
        {
            cout<<val<<" "<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
        }


    }
    return 0;
}