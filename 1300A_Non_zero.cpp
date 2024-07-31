#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    long long int t,n,sum,pro,m;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        sum=0;
        pro=1;
        m=0;
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
            sum+=a[j];
            //pro=pro*a[j];
            if(a[j]==0)
                m++;
        }
        if(sum!=0&&m==0)
            cout<<"0"<<endl;
        else
        {
            if(sum==0&&m!=0)
            {
                cout<<m<<endl;
            }
            else if(sum==0 &&m==0)
            {
                cout<<"1"<<endl;
            }
            else if(m!=0&&sum!=0)
            {
                if(sum+m!=0) cout<<m<<endl;
                else cout<<m+1<<endl;
            }


        }
    }
    return 0;

}
