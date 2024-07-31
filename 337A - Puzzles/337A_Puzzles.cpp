#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,i,j, mini = 5000;
     scanf("%d %d",&n,&m);
     int ara[m];
     int diff[n-1];
     for(i=0 ; i<m ;i++)
     {
          scanf("%d",&ara[i]);
     }
     sort(ara, ara+m, greater<int>());
     for(i=0,j=n-1; j<m; i++,j++)
     {
          diff[i]=ara[i]-ara[j];
          if(diff[i]<=mini)
               mini=diff[i];

     }
     printf("%d",mini);
     return 0;
}
