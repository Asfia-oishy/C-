#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n ,sum=0,i,j,x=1,w=0,y;
     scanf("%d",&n);
     int ara[n];
     for(i=0 ; i<n ; i++)
     {
          scanf("%d",&ara[i]);
     }
     sort(ara,ara+n,greater<int>());
     for(i=0 ; i <n ;i++)
     {
          sum=sum+ara[i];
     }
     for(j=0 ; j<n ; j++)
     {
          w=w+ara[j];
          y=sum-w;
          if(w<=y) x++;
          else break;
     }
     printf("%d",x);
     return 0;

}
