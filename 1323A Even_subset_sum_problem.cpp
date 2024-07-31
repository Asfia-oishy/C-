#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,odd,even,pos;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        odd=0;
        even=0;
        cin>>n;
        int ara[n];
        for(int j=0; j<n; j++)
        {
            cin>>ara[j];
            if(ara[j]%2==0)
            {

                even++;
            }
        }
        for(int a=0; a<n; a++)
        {
            if(ara[a]%2==0)
            {
                if(odd<2)
                    odd=0;
            }
            else  if(ara[a]%2!=0)
            {
                odd++;
                if(odd==2)
                   {
                    pos=a;
                   break;}
            }
        }
        if(even!=0)
        {
            cout<<"1"<<endl;
            for(int k=0; k<n; k++)
            {

                if(ara[k]%2==0)
                {
                    cout<<k+1<<endl;
                    break;
                }
            }

        }
        else
        {
            if(odd==2)
            {
                cout<<odd<<endl;
                for(int z=0; z<=pos; z++)
                {
                    if(ara[z]%2!=0)
                        cout<<z+1<<" ";
                }
                cout<<"\n";
            }
            else
                cout<<"-1"<<endl;
        }

    }
    return 0;
}
