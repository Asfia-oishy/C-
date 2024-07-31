#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    if(a==b)
        return a;

    if(a<b)
        return gcd(a,b-a);
    return gcd(a-b,a);


}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int x,y,result=0,val;
        cin>>x;

        for(y=1;y<x;y++)
        {
            //cout<<"gcd : "<<gcd(x,y)<<endl;
            if((gcd(x,y)+y)>result)
            {
                result=gcd(x,y)+y;
                val=y;
            }
        }

        cout<<val<<endl;



    }
    return 0;
}
