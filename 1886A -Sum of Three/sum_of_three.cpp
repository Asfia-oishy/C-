#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int x=1,y=2,z;
        if(n<7 ||n==9)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            z = n-3;
            if(z%3==0)
            {
                cout<<"YES"<<endl;
                cout<<1<<" "<<4<<" "<<n-5<<endl;;
            }
            else
            {
                cout<<"YES"<<endl;
                 cout<<1<<" "<<2<<" "<<n-3<<endl;
            }
        }
    }
    return 0;
}