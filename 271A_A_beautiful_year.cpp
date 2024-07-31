#include<bits/stdc++.h>
using namespace std;
int main()
{
     int y,i,j,x,z;
     cin>>y;
     y=y+1;
     set<int>s;
    for(j=0; ;j++)
    {
          z=y;
          for(i=0;;i++)
          {
               x=z%10;
               z=z/10;
               s.insert(x);
               if(z==0)
                    break;
          }
          if(s.size()==4)
               {
                    cout<<y;
                    break;
               }
          else
             {
                  y=y+1;
                  s.clear();
             }
     }
     return 0;
}
