#include<bits/stdc++.h>
using namespace std;
int main()
{
     int cases,a,b,x,y,p,q,r,s,z[4],max;
     cin>>cases;
     for(int i=0;i<cases;i++)
     {
          max=0;
          cin>>a>>b>>x>>y;
          x++;y++;
          p=x-1;
          q=a-x;
          r=y-1;
          s=b-y;
          z[0]=a*r;
          z[1]=a*s;
          z[2]=b*p;
          z[3]=b*q;
          for(int j=0;j<4;j++)
          {
               if(z[j]>=max) max=z[j];
          }
          cout<<max<<endl;
 
     }
     return 0;
}