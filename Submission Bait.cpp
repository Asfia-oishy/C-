#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,index,mx=0;
        cin>>n;
        int a[n];
        int counts[n+1];
        int j=0;
        bool flag=false;
        while (j<n)
        {
            cin>>a[j];
            counts[j]=0;
            if(a[j]>mx)
                mx=a[j];

            j++;
        }
        counts[n]=0;
        sort(a,a+n);
        for(int k=0; k<n; k++)
        {
            counts[a[k]]+=1;

        }
        for(int k=mx; k>=0; k--)
        {
            if(counts[k]%2!=0)
            {
                cout<<"YES"<<endl;

                flag = true;
                break;
            }
        }

        if(flag==false)
        {
            cout<<"NO"<<endl;

        }

    }
    return 0;
}
