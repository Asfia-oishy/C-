#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n],sum,count=0;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(int j=0; j<n; j++)
    {

        for(int k=0; k<n; k++)
        {
             sum=0;
            if(k!=j)
            {
               sum=ara[k]+ara[j];
               for(int m=0;m<n;m++)
               {
                    if(sum==ara[m])
                    {
                         cout<<m+1<<" "<<j+1<<" "<<k+1<<endl;
                         count++;
                    }
                    if(count!=0) break;
               }
            }
            if(count!=0) break;
        }
        if(count!=0 ) break;
        if(j==(n-1) && count==0) cout<<"-1"<<endl;

    }
    return 0;
}
