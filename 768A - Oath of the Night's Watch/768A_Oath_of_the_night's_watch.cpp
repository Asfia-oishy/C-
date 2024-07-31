#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a=0,i,min=100000000000,max=0;
     scanf("%d",&n);
     int ara[n];
     for(i=0 ; i <n ; i++)
     {
          scanf("%d",&ara[i]);
          if(ara[i]<=min)
               min=ara[i];
          if(ara[i]>=max)
               max=ara[i];
     }
     sort(ara,ara+n);
     for(i=0 ; i<n ; i++)
     {
          if( ara[i]!=min && ara[i]!=max)
               a++;
     }

     printf("%d",a);

 return 0;
}

