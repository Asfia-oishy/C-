#include<bits/stdc++.h>
using namespace std;
int main()
{
     int ara[4],i,a,b,c;
     for(i=0;i<4; i++)
     {
          scanf("%d",&ara[i]);
     }
     sort(ara,ara+4,greater<int>());
     a=(ara[1]+ara[2])-ara[0];
     b=(ara[2]+ara[3])-ara[0];
     c=(ara[3]+ara[1])-ara[0];
     printf("%d %d %d",a,b,c);
     return 0;
}

