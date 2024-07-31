#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;

        if(n>=2)
        {
               for(int i=0;i<n-2;i++)
               {
                    cout<<"2";
               }
               sum=(n-1)*2+3;
               if(sum%3==0)
               {
                    cout<<"33"<<endl;
               }
               else
               {
                    cout<<"23"<<endl;
               }



        }
        if(n<=0 ||n==1)
        {
            cout<<"-1"<<endl;

        }

    }
    return 0;
}

