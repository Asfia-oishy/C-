#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,max=0,c;

     cin>>t;
     for(int i=0;i<t;i++)
     {
          max=0;
          c=0;
          cin>>n;
          char ara[n];
          cin>>ara;
          for(int j=0;j<n;j++)
          {

               c=0;
               if(ara[j]=='A')
               {
                    for(int k=j+1;k<n;k++)
                    {
                         if(ara[k]=='P')

                              c++;
                         if(ara[k]=='A') break;

                    }
                    if(c>=max) max=c;
               }
          }
          cout<<max<<endl;
     }
     return 0;
}
