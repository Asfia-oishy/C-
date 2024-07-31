#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,i,z=0,x,z1,m,j,result,y,p;
     scanf("%d %d",&n,&k);
     if(n%2==0)
          m=n/2;
     else
     m=(n/2)+1;
     int ara[n];
     for(i=0;i<n;i++)
     {
          scanf("%d",&ara[i]);
     }
     sort(ara,ara+n);
     for(j=0;j<n-1;j++)
     {
          if(ara[j]==ara[j+1])
               {z++;
               j++;}
     }
     y=m-z;
     result=y+(2*z);
     printf("%d",result);
     return 0;

}


