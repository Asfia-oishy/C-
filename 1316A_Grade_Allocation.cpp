#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,cases,i,a, max,sum,output;
     cin>>cases;
     for(i=0;i<cases;i++)
     {
          //max=0;
          sum=0;
          cin>>n>>m;
          for(int j=0;j<n;j++)
          {
               cin>>a;
             //  if(a>=max) max=a;
               sum+=a;
          }
          if(sum>=m) output=m;
          else output=sum;
          cout<<output<<endl;
     }
     return 0;

}
