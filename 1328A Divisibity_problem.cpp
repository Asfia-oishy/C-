#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cases,count,div,r,x;
    cin>>cases;
    for(int i=0; i<cases; i++)
    {
        count=0;
        cin>>a>>b;

            if(a%b==0)
            {
                cout<<count<<endl;

            }
           else
           {
                div=a/b;
                x=div+1;
               r= (b*x)-a;
               cout<<r<<endl;
           }
        }

    return 0;
}
