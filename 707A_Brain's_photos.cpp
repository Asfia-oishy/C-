#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,i,j,x=0;
     cin>>n>>m;
     char z[n][m];
     for(i=0;i<n;i++)
     {
          for(j=0;j<m;j++)
          {
               cin>>z[i][j];
                if(z[i][j]=='Y'||z[i][j]=='C'||z[i][j]=='M')
                    x++;
          }
     }

     if(x!=0)
          cout<< "#Color"<<endl;
     else
          cout<<"#Black&White"<<endl;
     return 0;
}
