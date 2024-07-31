#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,sum=0;
     string ara;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>ara;
          if(ara[0]=='+' || ara[2]=='+')
               sum=sum+1;
          else if(ara[0]=='-' || ara[2]=='-')
               sum=sum-1;
     }
     cout<<sum<<endl;
     return 0;
}
